#ifndef PAINTWALL_H
#define PAINTWALL_H

#define CHAR_SIDE '#'


#include "baseapp.h"


class PaintWall : public BaseApp
{
public:
    PaintWall();
    ~PaintWall();
    int getPlayFieldX() const; // функція в класі називається метод

    int getPlayFieldY() const; // метод

    void setPlayFieldX(int newPlayFieldX);

    void setPlayFieldY(int newPlayFieldY);

    void setWalls();


private:
    int mPlayFieldX;
    int mPlayFieldY;

};

#endif // PAINTWALL_H
