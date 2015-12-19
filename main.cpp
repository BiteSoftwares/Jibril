#include "MainWindow.h"
#include "Versioning.h"
#include <QApplication>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow Test ;

    Versioning Ver ;

    std::cout << Ver.GetVersion() << std::endl ;

    Ver.SetVersion(1,2,3,4);

    std::cout << Ver.GetVersion() << std::endl ;

    Test.show();

    return app.exec();
}
