#include "sett.h"
#include "ui_sett.h"
#include "ui_sett.h"
#include "qircbot.cpp"

Sett::Sett(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    BotConfig config;
    settings->beginGroup("login");
    config.ser = settings->value("settings/server", conf.ser).toString();
    config.por = settings->value("settings/port", conf.por).toInt();
    config.ni = settings->value("settings/nick", conf.ni).toString();
    config.chan = settings->value("settings/channel", conf.chan).toString();
    settings->endGroup();

    ui->setupUi(this);
    ui->server->setText(settings->value("settings/server", config.ser).toString());
    ui->port->setText(settings->value("settings/port", config.por).toString());
    ui->nick->setText(settings->value("settings/nick", config.ni).toString());
    ui->channel->setText(settings->value("settings/channel", config.chan).toString());
    QObject::connect(ui->save_quit_Button, SIGNAL(clicked()), this, SLOT(quit_and_save()));
}

Sett::~Sett()
{
    delete ui;
}

void Sett::quit_and_save()
{
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            nullptr,
            "Сохранение настроек",
            "Хотите сохранить внесенные изменения в настройках?",
            QMessageBox::Yes | QMessageBox::No
        );
        if (reply == QMessageBox::Yes) {
            // сохраняемся
            settings->beginGroup("login");
            settings->setValue("settings/server", ui->server->text());
            settings->setValue("settings/port", ui->port->text());
            settings->setValue("settings/nick", ui->nick->text());
            settings->setValue("settings/channel", ui->channel->text());
            settings->endGroup();
            settings->sync();
            qDebug() << "Настройки сохранены!";
        } else {
            // возвращаем старые
            qDebug() << "Настройки не сохранены.";
        }
    close();

}



