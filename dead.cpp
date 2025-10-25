#include "dead.h"
#include "ui_dead.h"
#include"mainwindow.h"

dead::dead(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dead)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        this->close();

    });
}

dead::~dead()
{
    delete ui;
}
