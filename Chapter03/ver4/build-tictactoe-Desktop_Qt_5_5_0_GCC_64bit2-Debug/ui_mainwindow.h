/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tictactoewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewGame;
    QAction *actionQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *player1;
    TicTacToeWidget *gameBoard;
    QLabel *player2;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 237);
        actionNewGame = new QAction(MainWindow);
        actionNewGame->setObjectName(QStringLiteral("actionNewGame"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/newgame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewGame->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        player1 = new QLabel(centralwidget);
        player1->setObjectName(QStringLiteral("player1"));

        verticalLayout->addWidget(player1);

        gameBoard = new TicTacToeWidget(centralwidget);
        gameBoard->setObjectName(QStringLiteral("gameBoard"));

        verticalLayout->addWidget(gameBoard);

        player2 = new QLabel(centralwidget);
        player2->setObjectName(QStringLiteral("player2"));

        verticalLayout->addWidget(player2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 19));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(actionNewGame);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        toolBar->addAction(actionNewGame);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNewGame->setText(QApplication::translate("MainWindow", "New Game", 0));
#ifndef QT_NO_TOOLTIP
        actionNewGame->setToolTip(QApplication::translate("MainWindow", "Start new game", 0));
#endif // QT_NO_TOOLTIP
        actionNewGame->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Exit the program", 0));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        player1->setText(QString());
        player2->setText(QString());
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
