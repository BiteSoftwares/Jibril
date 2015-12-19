#ifndef ANIMATION_H
#define ANIMATION_H

#include <QApplication>
#include <QPixmap>

#include <vector>
#include <string>

class Animation
{
    public :

        Animation(std::string Name, int FPS = 60) ;
        void Run() ;

    private :

        int Animation_FPS ;
        std::string Animation_Name ;

        std::vector<QPixmap> Pixmap_List ;
};

#endif // ANIMATION_H
