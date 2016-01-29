#include "tower.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game gameApp;
    gameApp.show();
    return a.exec();
}
