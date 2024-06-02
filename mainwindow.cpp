#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QSettings>
#include <QTextEdit>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void readSettings(const QSettings& settings)
{
    QStringList dataList = settings.value("CSVData").toStringList();
    qDebug() << "CSV Data Loaded from Settings:";
    for (const QString& data : dataList)
    {
        qDebug() << data;
    }
}

void saveCsvToSettings(const QString& filePath, QSettings& settings)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Cannot open file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    QStringList dataList;
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split('\n');
        for (const QString& field : fields)
        {
            dataList.append(field);
        }
    }

    settings.setValue("CSVData", dataList);
}

int qqq(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
void MainWindow::on_pushButton_clicked() {
    QString filePath = "G:/Top_players_parse.csv";
    QSettings settings("N", "A");
    saveCsvToSettings(filePath, settings);
    readSettings(settings);
    QStringList csvData = settings.value("CSVData").toStringList();

    QString tableContent;
    int columnWidth = 30;

    for (const QString& row : csvData) {
        QStringList columns = row.split(",");
        for (int i = 0; i < 6; ++i) {
            if (i < columns.size()) {
                QString column = columns[i];

                tableContent += QString("%1").arg(column, -columnWidth, QChar(' ')) + "\t";
            } else {
                // Пустой столбец, если данных нет
                tableContent += QString(columnWidth, ' ') + "\t";
            }
        }
        tableContent += "\n"; // Отдельная строка для каждой строки и столбца
    }

    QTextEdit *textEdit = new QTextEdit();
    textEdit->setReadOnly(true);
    textEdit->setWindowTitle("Top Players Table");
    textEdit->setText(tableContent);
    textEdit->resize(1600, 800);
    textEdit->show();
}
