/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(195, 195, 195)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1920, 1080));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(195, 195, 195)"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(19, 60, 1821, 721));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:rgb(163, 163, 163)"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(120, 40, 240, 90));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(22);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("Fore-Color:rgb(0, 0, 0)"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 40, 240, 90));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1030, 40, 240, 90));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1480, 40, 240, 90));
        pushButton_4->setFont(font);
        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(120, 170, 690, 240));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        textEdit->setFont(font1);
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(widget_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(1030, 170, 690, 240));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        textEdit_2->setFont(font2);
        textEdit_2->setReadOnly(true);
        textEdit_3 = new QTextEdit(widget_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setEnabled(true);
        textEdit_3->setGeometry(QRect(120, 430, 690, 240));
        textEdit_3->setFont(font1);
        textEdit_3->setReadOnly(true);
        textEdit_4 = new QTextEdit(widget_2);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setEnabled(true);
        textEdit_4->setGeometry(QRect(1030, 430, 690, 240));
        textEdit_4->setFont(font2);
        textEdit_4->setReadOnly(true);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 831, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(16);
        font3.setBold(true);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(163, 163, 163)"));
        lineEdit->setFrame(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Top Players", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Recent Events", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Patch Analysis", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Highlights", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">Virtus.pro \320\277\321\200\320\276\321\210\320\273\320\260 \320\275\320\260 Riyadh Masters 2024</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p a"
                        "lign=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\236\320\261\321\213\320\263\321\200\320\260\320\262 Natus Vincere \320\262 \320\267\320\260\320\272\320\273\321\216\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \321\201\320\265\321\200\320\270\320\270 \321\201\320\276 \321\201\321\207\321\221\321\202\320\276\320\274 3:0, Virtus.pro \320\277\320\276\320\273\321\203\321\207\320\270\320\273\320\260 \321\201\320\273\320\276\321\202 \320\275\320\260 \320\263\321\200\321\217\320\264\321\203\321\211\320\265\320\274 Riyadh Masters 2024. \320\222 \321\200\320\260\320\274\320\272\320\260\321\205 Riyadh Masters 2024: \320\227\320\260\320\272\321\200\321\213\321\202\321\213\320\265 \320\272\320\262\320\260\320\273\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\222\320\276\321\201\321\202\320\276\321\207\320\275\320\276\320\271 \320\225\320"
                        "\262\321\200\320\276\320\277\321\213 \321\200\320\260\320\267\321\213\320\263\321\200\321\213\320\262\320\260\320\273\320\276\321\201\321\214 \320\276\320\264\320\275\320\276 \320\274\320\265\321\201\321\202\320\276 \320\262 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\274 \321\202\321\203\321\200\320\275\320\270\321\200\320\265. \320\232\320\276\320\274\320\260\320\275\320\264\320\260 \320\270\320\267 \320\240\320\276\321\201\321\201\320\270\320\270 \320\275\320\265 \321\203\321\201\321\202\321\203\320\277\320\270\320\273\320\260 \320\275\320\270 \320\275\320\260 \320\276\320\264\320\275\320\276\320\271 \320\272\320\260\321\200\321\202\320\265 \320\277\320\276 \321\205\320\276\320\264\321\203 \320\267\320\260\320\272\321\200\321\213\321\202\320\276\320\263\320\276 \320\276\321\202\320\261\320\276\321\200\320\260. Riyadh Masters 2024 \320\277\321\200\320\276\320\271\320\264\321\221\321\202 \320\262 \321\201\321\202\320\276\320\273\320\270\321\206\320\265 \320\241\320\260\321\203\320\264\320\276"
                        "\320\262\321\201\320\272\320\276\320\271 \320\220\321\200\320\260\320\262\320\270\320\270 \321\201 4 \320\277\320\276 21 \320\270\321\216\320\273\321\217. \320\234\320\265\320\266\320\264\321\203 \321\203\321\207\320\260\321\201\321\202\320\275\320\270\320\272\320\260\320\274\320\270 \320\261\321\203\320\264\320\265\321\202 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\276 $5 \320\274\320\273\320\275.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\302\253\320\230\320\263\321\200\321\213 \320\221\321\203\320\264\321\203\321\211\320\265\320\263\320\276 2025\302\273 \320\277\321\200\320\276\320\262\320\265\320\264\321\203\321\202 \320\262 \320\224\321\203\320\261\320\260\320\265</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\242\321\203\321\200\320\275\320\270\321\200 \320\276\321\202 \320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\270\321\205 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\202\320\276\321\200\320\276\320\262 \320\277\321\200\320\276\320\271\320\264\320\265\321\202 \320\262 \320\272\321\200\321\203\320\277\320\275\320\265\320\271\321\210\320\265\320\274 \320\263\320\276\321\200\320\276\320\264\320\265 \320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\275\321\213\321\205 \320\220\321\200\320\260\320\261\321\201\320\272\320\270\321\205 \320\255\320\274\320\270\321\200\320\260\321\202\320\276\320\262 \320\224\321\203\320\261\320\260"
                        "\320\265. \320\236\320\261 \321\215\321\202\320\276\320\274 \320\276\321\204\320\270\321\206\320\270\320\260\320\273\321\214\320\275\320\276 \320\276\320\261\321\212\321\217\320\262\320\270\320\273 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214 \320\277\321\200\320\276\320\265\320\272\321\202\320\260 \320\230\320\263\320\276\321\200\321\214 \320\241\321\202\320\276\320\273\321\217\321\200\320\276\320\262 \320\262 Telegram.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\224\321\200\321\203\320\263\320\270\321\205 \320\277\320\276\320\264\321\200\320\276\320\261\320\275\320\276\321\201\321\202\320\265\320\271, \320\277\320\276\320\274\320\270\320\274\320\276 \320\274\320\265\321\201\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217, \321\202\320\276\320\277-"
                        "\320\274\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\275\320\265 \321\201\320\276\320\276\320\261\321\211\320\270\320\273. \320\222 \321\215\321\202\320\276\320\274 \320\263\320\276\320\264\321\203 Games of the Future 2024 \320\277\321\200\320\276\321\210\320\265\320\273 \320\262 \320\232\320\260\320\267\320\260\320\275\320\270. \320\242\321\203\321\200\320\275\320\270\321\200 \320\277\320\276 Dota 2 \321\201 \320\277\321\200\320\270\320\267\320\276\320\262\321\213\320\274 \320\262 \321\200\320\260\320\267\320\274\320\265\321\200\320\265 $1 000 000 \320\262 \321\200\320\260\320\274\320\272\320\260\321\205 \320\274\320\265\321\200\320\276\320\277\321\200\320\270\321\217\321\202\320\270\321\217 \320\262\321\213\320\270\320\263\321\200\320\260\320\273\320\260 \320\232\320\270\321\202\320\260\320\271\321\201\320\272\320\260\321\217 \320\272\320\276\320\274\320\260\320\275\320\264\320\260 Xtreme Gaming.</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\302\253\320\247\320\265\320\274 \320\275\320\270\320\266\320\265 \321\200\320\265\320\271\321\202\320\270\320\275\320\263, \321\202\320\265\320\274 \320\277\321\200\320\270\321\217\321\202\320\275\320\265\320\265 \320\273\321\216\320\264\320\270\302\273</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\241\321\202\321\200\320\270\320\274\320\265\321\200 \320\242\320\270\320\274\321\203\321\200 '\320\242\321\200\320\260\320\222\320\276\320\234\320\260\320\235' \320\245\320\260\321\204\320\270\320\267\320\276\320\262 \320\262 \321\200\320\260\320\274\320\272\320\260\321\205 \320\273\320\270\321\207\320\275\320\276\320\271 \321\202\321\200\320\260\320\275\321\201\320\273\321\217\321\206\320\270\320\270 \320\275\320\260 \320\277\320\273\320\260\321\202\321\204\320\276\321\200\320\274\320\265 Twitch \320\277\320\276\320\264\320\270\321\201\320\272\321\203\321\202\320\270\321\200\320\276\320\262\320\260\320\273 \320\276 \321\200\320\260\320\267\320\275\320\270\321\206\320\265"
                        " \320\262 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\270 \320\274\320\265\320\266\320\264\321\203 \320\270\320\263\321\200\320\276\320\272\320\260\320\274\320\270 \320\275\320\260 \320\262\321\213\321\201\320\276\320\272\320\276\320\274 \320\270 \320\275\320\270\320\267\320\272\320\276\320\274 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\260\321\205.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">&quot;\320\227\320\260\320\261\320\273\321\203\320\266\320\264\321\221\320\275\320\275\321\213\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\320\272 \321\201\321\207\320\270\321\202\320\260\320\265\321\202, \321\207\321\202\320\276 \320\275\320\260 \320\262\321\213\321\201\320\276\320\272\320\270\321\205 \321\200\320\260\320\275\320\263\320\260\321\205 \320\260\320\264\320\265\320\272\320"
                        "\262\320\260\321\202\320\275\320\260\321\217 \320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\321\217. \320\242\321\213 \321\207\320\265\320\263\320\276?</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\240\320\265\320\261\321\217\321\202\320\260, \320\275\320\265 \321\206\320\265\320\275\320\270\321\202\320\265 \321\202\320\276, \321\207\321\202\320\276 \320\270\320\274\320\265\320\265\321\202\320\265. \320\247\320\265\320\274 \320\275\320\270\320\266\320\265 \321\200\320\265\320\271\321\202\320\270\320\275\320\263, \321\202\320\265\320\274 \320\277\321\200\320\270\321\217\321\202\320\275\320\265\320\265 \320\273\321\216\320\264\320\270. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-siz"
                        "e:14pt; font-weight:700;\">\320\255\321\202\320\276 \321\217 \320\262\320\260\320\274 \321\202\320\276\321\207\320\275\320\276 \320\274\320\276\320\263\321\203 \321\201\320\272\320\260\320\267\320\260\321\202\321\214 \320\272\320\260\320\272 \321\207\320\265\320\273\320\276\320\262\320\265\320\272, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\261\321\213\320\273 \321\201\321\203\320\277\320\265\321\200\320\275\320\270\320\267\320\272\320\276 \320\270 \321\201\321\203\320\277\320\265\321\200\320\262\321\213\321\201\320\276\320\272\320\276. </span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">MeTTpuM \320\277\320\276\321\201\320\273\320\265 \320\277\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \320\272 9Pandas \320\275\320\260 \320\277\320\276\320\267\320\270\321\206\320\270\321\216 \321\202\321\200\320\265\320\275\320\265\321\200\320\260: \302\253\320\236\321\207\320"
                        "\265\320\275\321\214 \320\274\320\275\320\276\320\263\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\274\320\265\320\275\321\217\321\202\321\214 \320\270 \320\270\320\274\320\277\321\200\321\203\320\262\320\270\321\202\321\214\302\273</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">&quot;\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217 \320\225\320\262\321\200\320\276\320\277\320\260 Entity \321\200\320\265\321\210\320\270\320\273\320\260 \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\202\321\200\320\265\320\275\320\265\321\200\320\260. \320\257, \320\262 \320\277\321\200\320"
                        "\270\320\275\321\206\320\270\320\277\320\265, \320\277\320\276\320\264\321\203\320\274\320\260\320\273, \321\207\321\202\320\276 \320\275\320\260\320\271\321\202\320\270 \320\270 \320\277\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \320\272 \320\272\320\276\320\274\321\203-\320\273\320\270\320\261\320\276 \320\272\320\260\320\272 \320\274\320\270\320\275\320\270\320\274\321\203\320\274 \320\264\320\276 \320\272\320\276\320\275\321\206\320\260 \321\201\320\265\320\267\320\276\320\275\320\260. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\235\320\260\320\277\320\270\321\201\320\260\320\273 \320\274\320\275\320\265 \320\233\321\221\321\205\320\260 Solo, \320\260 \321\202\320\260\320\272\320\266\320\265 \320\261\321\213\320\273\320\276 \320\265\321\211\321\221 \320\277\320\260\321\200\321\203 \320"
                        "\262\320\260\321\200\320\270\320\260\320\275\321\202\320\276\320\262. \320\240\320\265\321\210\320\270\320\273 \320\277\320\276\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\262 \320\240\320\276\321\201\321\201\320\270\321\217 9Pandas.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\236\321\207\320\265\320\275\321\214 \320\274\320\275\320\276\320\263\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\274\320\265\320\275\321\217\321\202\321\214 \320\270 \320\270\320\274\320\277\321\200\321\203\320\262\320\270\321\202\321\214. \320\241\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\265\320\274 \320\277\321\200\320\270\320\264\320\265\321\202\321\201\321\217 \320\274\320\265\320\275\321\217\321\202\321\214 \321\201\320\262\320\276\320\270\321\205 \320\263\320\265\321\200\320\276\320\265\320\262.</span></p></"
                        "body></html>", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Find item, player or something else...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
