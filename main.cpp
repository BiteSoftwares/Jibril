#include "Include/MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow Test ;

    app.setApplicationName(QString::fromStdString("Jibril v" + Test.Actual_Version.GetVersion()));

    Test.show() ;

    return app.exec();
}
