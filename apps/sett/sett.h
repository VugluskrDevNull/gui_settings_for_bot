#ifndef SETT_H
#define SETT_H

#include <QMainWindow>
#include <QMessageBox>
#include "qircbot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Sett : public QMainWindow
{
    Q_OBJECT

public:
    Sett(QWidget *parent = nullptr);
    ~Sett();

private:
    Ui::MainWindow *ui;
private slots :
    void quit_and_save();
signals :
};

#endif // SETT_H
