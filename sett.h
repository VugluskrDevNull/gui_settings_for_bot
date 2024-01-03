#ifndef SETT_H
#define SETT_H

#include <QMainWindow>
#include "qircbot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Sett; }
QT_END_NAMESPACE

class Sett : public QMainWindow
{
    Q_OBJECT

public:
    Sett(QWidget *parent = nullptr);
    ~Sett();

private:
    Ui::Sett *ui;
private slots :
    void quit_and_save();
signals :
    void on_quit_and_save(QString);
};

#endif // SETT_H
