#include "about.h"

#include <QApplication>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("catpswin56");
    QCoreApplication::setApplicationName("linver");

    QApplication a(argc, argv);
    About w;
    w.move(25, 25);
    w.show();
    return a.exec();
}
