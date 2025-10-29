#include "mainwindow.h"
#include "qlineedit.h"
#include "ui_mainwindow.h"
#include<QKeyEvent>
#include<QTimer>
#include <QPainter>
#include<QApplication>
#include"dead.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //窗口标题
    setWindowTitle("RUBBER MAN");
    //窗口图标
    setWindowIcon(QPixmap(":/1.png"));
    //地面
    ui->lineEdit->hide();
    ui->pushButton_2->hide();
    ui->pushButton->hide();
    ui->label_1->hide();

    QPixmap pix(":/2.png");
    ui->label->setPixmap(pix);
    //人物
    QPixmap pix2(":/1.png");
    ui->label_2->setPixmap(pix2);

    QPixmap pix3(":/errrrrrr.png");
    ui->label_5->setPixmap(pix3);

    QTimer::singleShot(4500,this,[=](){
        ui->label_3->deleteLater();
        ui->label_4->deleteLater();
    });

    QLabel* label_6 = new QLabel();
    label_6->setText("欢迎来到RubberMan!!!");
    QFont font;
    font.setPointSize(12);  // 设置字体大小为20点
    label_6->setFont(font);
    label_6->setGeometry(50,60,192,40);
    label_6->setParent(this);
    label_6->show();

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);

    if (ui->progressBar->value() == 0)
    {
        s.show();
    }
    if (s.close())
    {
        ui->progressBar->setValue(100);
    }
    QLabel* label_9 = new QLabel();
    label_9->setText("你准备叫什么名字?");
    QFont font1;
    font1.setPointSize(20);  // 设置字体大小为20点
    label_9->setFont(font1);
    label_9->setGeometry(90,100,300,40);
    label_9->setParent(this);
    label_9->hide();

    connect(ui->page,&QPushButton::clicked,[=](){
        ui->pushButton->show();
        ui->label_1->show();
        ui->page->hide();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_5->hide();
        ui->progressBar->hide();

        QLabel* label_6 = new QLabel();
        label_6->setText("欢迎来到RubberMan!!!");
        QFont font;
        font.setPointSize(12);  // 设置字体大小为20点
        label_6->setFont(font);
        label_6->setGeometry(50,60,192,40);
        label_6->setParent(this);
        label_6->show();


        QTimer::singleShot(1002,this,[=](){
            label_6->hide();
        });
    });
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->pushButton_2->show();
        ui->label_1->hide();
        ui->lineEdit->show();
        label_9->show();
        ui->pushButton->hide();
        label_6->hide();
    });

    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        if(ui->lineEdit->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","此处不能为空!");
        }else{
            ui->pushButton_2->hide();
            ui->lineEdit->hide();
            label_9->hide();
            QString userName = ui->lineEdit->text();
            ui->label_7->setText("你好,"+ userName);

            QPixmap pix(":/icon.png");
            ui->label_8->setPixmap(pix);
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_U:
        up();
        break;

    case Qt::Key_R:
        right();
        break;
    case Qt::Key_L:
        left();
        break;
    }


}
void MainWindow::up()
{
    QRect currentRect = ui->label_2->geometry();
    int newY = currentRect.y() - 36;
    ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());

    QTimer::singleShot(965, this,[=](){
        QRect currentRect = ui->label_2->geometry();
        int newY = currentRect.y() + 36;
        ui->label_2->setGeometry(currentRect.x(), newY, currentRect.width(), currentRect.height());
    });
}

void MainWindow::right()
{
    QRect currentRect1 = ui->label->geometry();
    int newX = currentRect1.x() - 20;
    ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    QTimer::singleShot(500,this,[=](){
        QRect currentRect1 = ui->label->geometry();
        int newX = currentRect1.x()  == -11;
        ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());


        QRect currentRect = ui->label_5->geometry();
        int NewX = currentRect.x() - 20;
        ui->label_5->setGeometry(NewX, currentRect.y(), currentRect.width(), currentRect.height());
        //(=
        //I know you're hurry,but don't hurry
        //Because I'am hurry too(I don't have some ideas for these code.)(=(=
    });
}



void MainWindow::left()
{
    QRect currentRect2 = ui->label->geometry();
    int newX = currentRect2.x() + 36;
    ui->label->setGeometry(newX,currentRect2.y(),currentRect2.width(), currentRect2.height());
    QTimer::singleShot(10,this,[=](){
        QRect currentRect2 = ui->label->geometry();
        int newX = currentRect2.x()  ==-11;  // 归位
        ui->label->setGeometry(newX, currentRect2.y(), currentRect2.width(), currentRect2.height());

    });

    QRect currentRect = ui->label_5->geometry();
    int NewX = currentRect.x() + 20;
    ui->label_5->setGeometry(NewX, currentRect.y(), currentRect.width(), currentRect.height());
}
/*explanation:
 * In the code of
 * QTimer::singleShot(500,this,[=](){
        QRect currentRect1 = ui->label->geometry();
        int newX = currentRect1.x()  ==-11;
        ui->label->setGeometry(newX, currentRect1.y(), currentRect1.width(), currentRect1.height());
    });
 * Is because iength of "2.png" finite a kind of achievement "infinty movement" effect
 */
