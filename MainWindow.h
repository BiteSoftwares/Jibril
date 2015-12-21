#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Versioning.h"
#include "Consciousness.h"

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QMouseEvent>

class MainWindow : public QWidget
{
    Q_OBJECT

    public :

        MainWindow() ;

        Versioning Actual_Version ;

        QLabel *Jibril_Image ;

        QTimer *SwitchTimer ;

    public slots :

        void SwitchImages();

    private:

        Consciousness Mind ;

        int Anim_Cursor ;

        void mousePressEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
        void mouseMoveEvent(QMouseEvent *event);
        int m_nMouseClick_X_Coordinate;
        int m_nMouseClick_Y_Coordinate;

};

#endif // MAINWINDOW_H
