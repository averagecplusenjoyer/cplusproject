/********************************************************************************
** Form generated from reading UI file 'top_players.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOP_PLAYERS_H
#define UI_TOP_PLAYERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_top_players
{
public:

    void setupUi(QWidget *top_players)
    {
        if (top_players->objectName().isEmpty())
            top_players->setObjectName("top_players");
        top_players->resize(400, 300);

        retranslateUi(top_players);

        QMetaObject::connectSlotsByName(top_players);
    } // setupUi

    void retranslateUi(QWidget *top_players)
    {
        top_players->setWindowTitle(QCoreApplication::translate("top_players", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class top_players: public Ui_top_players {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOP_PLAYERS_H
