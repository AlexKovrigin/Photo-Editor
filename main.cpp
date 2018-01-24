#include "photomain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PhotoMain w;
    w.show();

    return a.exec();
}
