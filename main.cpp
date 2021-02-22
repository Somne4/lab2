#include "bookadress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bookadress w;
    w.show();
    return a.exec();
}
