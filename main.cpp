#include "qircbot.h"
#include "sett.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sett  s;
    Bot * bot = new Bot;

    if (!(bot->connect()))
        return  1;
    s.show();
    return a.exec();
}

