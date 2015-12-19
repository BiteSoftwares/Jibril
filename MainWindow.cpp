#include "MainWindow.h"
#include <QApplication>
#include <QLabel>
#include <QMouseEvent>

MainWindow::MainWindow() : QWidget()
{
    setFixedSize(500, 300) ;

    setStyleSheet("background:transparent;") ;
    setAttribute(Qt::WA_TranslucentBackground) ;
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    SwitchTimer = new QTimer(this) ;

    Idle_1 = new QLabel(this) ;
<<<<<<< HEAD
    Idle_1 -> setPixmap(QPixmap("../../../Data/3D/Renders/Idle_1.png")) ;
    Idle_1->setVisible(true);

    Idle_2 = new QLabel(this) ;
    Idle_2 -> setPixmap(QPixmap("../../../Data/3D/Renders/Idle_2.png")) ;
=======
    Idle_1 -> setPixmap(QPixmap("../../Data/3D/Renders/Idle_1.png")) ;
    Idle_1->setVisible(true);

    Idle_2 = new QLabel(this) ;
    Idle_2 -> setPixmap(QPixmap("../../Data/3D/Renders/Idle_2.png")) ;
>>>>>>> 16889d6fcba4cee975624581277276a4d4434e4b
    Idle_2->setVisible(false);

    QObject::connect(SwitchTimer, SIGNAL(timeout()), this, SLOT(SwitchImages())) ;

    SwitchTimer->start(500) ;
}

void MainWindow::SwitchImages()
{
    if (Idle_1->isVisible())
    {
        Idle_1->setVisible(false);
        Idle_2->setVisible(true);
    }
    else if (Idle_2->isVisible())
    {
        Idle_2->setVisible(false);
        Idle_1->setVisible(true);
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
    SwitchTimer->stop();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    SwitchTimer->start(500);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}
