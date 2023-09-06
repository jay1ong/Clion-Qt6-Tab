#include <QApplication>
#include <QPushButton>
#include "tab.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QString fileName;

    if (argc >= 2)
        fileName = argv[1];
    else
        fileName = ".";

    (new Tab(fileName))->show();

    return QApplication::exec();
}
