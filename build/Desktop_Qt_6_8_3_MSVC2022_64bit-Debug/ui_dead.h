/********************************************************************************
** Form generated from reading UI file 'dead.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAD_H
#define UI_DEAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dead
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *dead)
    {
        if (dead->objectName().isEmpty())
            dead->setObjectName("dead");
        dead->resize(464, 341);
        label = new QLabel(dead);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 120, 141, 31));
        pushButton = new QPushButton(dead);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 240, 75, 23));

        retranslateUi(dead);

        QMetaObject::connectSlotsByName(dead);
    } // setupUi

    void retranslateUi(QWidget *dead)
    {
        dead->setWindowTitle(QCoreApplication::translate("dead", "Form", nullptr));
        label->setText(QCoreApplication::translate("dead", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\275\240\346\255\273\344\272\206!</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("dead", "\351\207\215\347\224\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dead: public Ui_dead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAD_H
