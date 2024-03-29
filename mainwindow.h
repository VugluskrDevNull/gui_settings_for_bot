#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots :
    void sendChannelMessage();
    void addChannelLog(const QString & s, const QString & text);
    void addStatusLog(const QString &text);
    void addDebugLog(const QString &text);
signals :
    void sendChannelMessage(QString);
};
#endif // MAINWINDOW_H
