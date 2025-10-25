#ifndef DEAD_H
#define DEAD_H

#include <QWidget>

namespace Ui {
class dead;
}

class dead : public QWidget
{
    Q_OBJECT

public:
    explicit dead(QWidget *parent = nullptr);
    ~dead();

private:
    Ui::dead *ui;
};

#endif // DEAD_H
