#include "Animation.h"

#include <QApplication>
#include <QPixmap>

#include <string>

Animation::Animation(std::string Name, int FPS)
{
    Animation_Name = Name ;

    Animation_FPS = FPS ;
}
