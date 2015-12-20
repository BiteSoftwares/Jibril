#include "MainWindow.h"

#include "Versioning.h"
#include "IntToStr.h"

#include <QApplication>
#include <QLabel>
#include <QMouseEvent>

#include <iostream>

MainWindow::MainWindow() : QWidget()
{
    Actual_Version.SetVersion(0,0,0,3);

    setFixedSize(500, 300) ;
    setWindowTitle(QString::fromStdString("Jibril v" + Actual_Version.GetVersion()));

    setStyleSheet("background:transparent;") ;
    setAttribute(Qt::WA_TranslucentBackground) ;
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    SwitchTimer = new QTimer(this) ;

    Anim_State = "Starting" ;

    Anim_Cursor = 0 ;

    Jibril_Image = new QLabel(this) ;
    Jibril_Image -> setPixmap(QPixmap("../../../Data/3D/Renders/Startup/0000.png")) ;
    Jibril_Image -> setVisible(true);

    QObject::connect(SwitchTimer, SIGNAL(timeout()), this, SLOT(SwitchImages())) ;

    SwitchTimer -> start(20) ;
}

void MainWindow::SwitchImages()
{
    if (Anim_State == "Starting")
    {
        if (Anim_Cursor < 59)
        {
            Anim_Cursor ++ ;
        }
        else
        {
            Anim_State = "Idle" ;
        }

        if (Anim_Cursor < 10)
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/Startup/000" + IntToStr(Anim_Cursor) + ".png")));

        }
        else
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/Startup/00" + IntToStr(Anim_Cursor) + ".png")));
        }
    }

    if (Anim_State == "Idle")
    {
        if (Anim_Cursor < 80)
        {
            Anim_Cursor ++ ;
        }
        else
        {
            Anim_Cursor = 60 ;
        }

        if (Anim_Cursor < 10)
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/Idle/000" + IntToStr(Anim_Cursor) + ".png")));

        }
        else
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/Idle/00" + IntToStr(Anim_Cursor) + ".png")));
        }
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event -> x();
    m_nMouseClick_Y_Coordinate = event -> y();
    SwitchTimer -> stop();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    SwitchTimer -> start(20);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event -> globalX() - m_nMouseClick_X_Coordinate,event -> globalY() - m_nMouseClick_Y_Coordinate);
}
