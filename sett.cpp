#include "sett.h"
#include "ui_sett.h"

Sett::Sett(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::Sett)
{
    ui->setupUi(this);
    QObject::connect(ui->save_quit_Button, SIGNAL(clicked()), this, SLOT(quit_and_save()));
}

Sett::~Sett()
{
                               //здесь будет функция из бота записи в сеттингс
//    delete ui;
}

void Sett::quit_and_save()
{
    settings->beginGroup("login");
    settings->setValue("settings/server", ui->server->text());
    settings->setValue("settings/port", ui->port->text());
    settings->setValue("settings/nick", ui->nick->text());
    settings->setValue("settings/channel", ui->channel->text());
    settings->endGroup();
    settings->sync();

}


