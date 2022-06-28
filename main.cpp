#include "mainwindow.h"
#include "customframe.h"
#include "form.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CustomFrame f(new MainWindow);
    f.show();
    return a.exec();
}
