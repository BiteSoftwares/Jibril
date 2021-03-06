#include "../Include/MainWindow.h"
#include "../Include/Versioning.h"
#include "../Include/Consciousness.h"
#include "../Include/IntToStr.h"

#include <QApplication>
#include <QLabel>
#include <QMouseEvent>

#include <iostream>

MainWindow::MainWindow() : QWidget()
{
    setFixedSize(500, 300) ;
    setWindowTitle(QString::fromStdString("Jibril v" + Actual_Version.GetVersion()));

    setStyleSheet("background:transparent;") ;
    setAttribute(Qt::WA_TranslucentBackground) ;
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    Mind.Initialize_Parameters() ;

    SwitchTimer = new QTimer(this) ;
    Parameters_Update_Timer = new QTimer(this) ;

    Anim_Cursor = 0 ;

    Jibril_Image = new QLabel(this) ;
    Jibril_Image -> setPixmap(QPixmap(500, 300)) ;
    Jibril_Image -> setVisible(true);

    QObject::connect(SwitchTimer, SIGNAL(timeout()), this, SLOT(SwitchImages())) ;
    QObject::connect(Parameters_Update_Timer, SIGNAL(timeout()), this, SLOT(Display_Parameters())) ;
    QObject::connect(Parameters_Update_Timer, SIGNAL(timeout()), this, SLOT(Update_Parameters())) ;

    SwitchTimer -> start(20) ;
    Parameters_Update_Timer -> start(1000) ;
}

void MainWindow::SwitchImages()
{
    if (Mind.Get_State() == "Starting")
    {
        if (Anim_Cursor < 59)
        {
            Anim_Cursor ++ ;
        }
        else
        {
            Mind.Change_State("Idle") ;
        }

        if (Anim_Cursor < 10)
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/000" + IntToStr(Anim_Cursor) + ".png")));
        }
        else
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/00" + IntToStr(Anim_Cursor) + ".png")));
        }
    }

    if (Mind.Get_State() == "Idle")
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
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/000" + IntToStr(Anim_Cursor) + ".png")));
        }
        else
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/00" + IntToStr(Anim_Cursor) + ".png")));
        }
    }

    if (Mind.Get_State() == "Bored")
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
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/000" + IntToStr(Anim_Cursor) + ".png")));
        }
        else
        {
            Jibril_Image -> setPixmap(QPixmap(QString::fromStdString("../../../Data/3D/Renders/00" + IntToStr(Anim_Cursor) + ".png")));
        }
    }
}

void MainWindow::Display_Parameters()
{
    for (unsigned int i = 0 ; i < Mind.Parameter_List.size() ; i++)
    {
        std::cout << "Parameter : " << Mind.Parameter_Name_List[i] << " Value : " << Mind.Parameter_List[i].Get_Parameter_Value() << std::endl ;
    }
    std::cout << std::endl << std::endl ;

    std::cout << Mind.Get_State() << std::endl ;
}

void MainWindow::Update_Parameters()
{
    Mind.Update_Parameters() ;
    Mind.Update_State() ;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event -> x();
    m_nMouseClick_Y_Coordinate = event -> y();
    SwitchTimer -> stop();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event -> x();
    m_nMouseClick_Y_Coordinate = event -> y();
    SwitchTimer -> start(25);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event -> globalX() - m_nMouseClick_X_Coordinate,event -> globalY() - m_nMouseClick_Y_Coordinate);
}
