/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QProgressBar *progressBar;
    QPushButton *page;
    QPushButton *pushButton;
    QLabel *label_1;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_8;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(856, 555);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 232);\n"
"border-radius:15px;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 330, 1914, 71));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 232);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 260, 61, 101));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(580, 220, 131, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(580, 250, 181, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1000, 260, 51, 71));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(550, 10, 311, 16));
        progressBar->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"QProgressBar::chunk(background : red);\n"
"border-image: url(:/lifeline.png);\n"
"background-image: url(:/lifeline.png);"));
        progressBar->setValue(100);
        page = new QPushButton(centralwidget);
        page->setObjectName("page");
        page->setGeometry(QRect(730, 450, 75, 23));
        page->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        page->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-image: url(:/whitebg.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(20, 420, 71, 81));
        pushButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/login.png);\n"
"border-radius:14px;\n"
""));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(40, 500, 53, 15));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 0, 201, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 230, 441, 41));
        lineEdit->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/whitebg.png);\n"
"border-radius:17px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(590, 430, 75, 23));
        pushButton_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-image: url(:/ww.png);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, 40, 351, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 10, 51, 51));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(370, 80, 311, 121));
        toolButton->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        toolButton->setStyleSheet(QString::fromUtf8("border-radius:40px;\n"
"background-image: url(:/ex.png);"));
        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(560, 270, 71, 71));
        toolButton_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        toolButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/about.png);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 40, 111, 91));
        pushButton_3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(250, 300, 301, 191));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 856, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\350\215\222\350\212\234\344\271\213\345\237\216\357\274\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\214\211\344\270\213\345\217\263\347\256\255\345\244\264\351\224\256\357\274\214\346\202\250\345\217\257\344\273\245\346\227\240\351\231\220\347\247\273\345\212\250", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        progressBar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>life</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        page->setText(QCoreApplication::translate("MainWindow", "\347\246\273\345\274\200\346\225\231\347\250\213", nullptr));
        pushButton->setText(QString());
        label_1->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lineEdit->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Name</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lineEdit->setText(QString());
        pushButton_2->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\345\205\263", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\201\224\347\263\273\344\275\234\350\200\205</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\345\223\224\345\223\251\345\223\224\345\223\251:NoCtI_7_7</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.X:Apricity_4474</p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.Youtube:NoCtI_7_7</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4.GitHub:185023687@qq.com(\346\210\226\346\220\234Rubber-man)</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
