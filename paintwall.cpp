#include "paintwall.h"

PaintWall::PaintWall()
{
    mPlayFieldX = new int;
    mPlayFieldY = new int;
    *mPlayFieldX = 16; // Alt+Enter  закидаємо в гетер i seter
    *mPlayFieldY = 20;
}

PaintWall::~PaintWall() // деструктор. натискаємо Alt+Enter -> вибираємо "Додати визначення до paintwall.h"
{
    delete mPlayFieldX; //
    delete mPlayFieldY;
}

int PaintWall::getPlayFieldX() const
{
    return *mPlayFieldX;
}

int PaintWall::getPlayFieldY() const
{
    return *mPlayFieldY;
}

void PaintWall::setPlayFieldX(int newPlayFieldX)
{
    *mPlayFieldX = newPlayFieldX;
}

void PaintWall::setPlayFieldY(int newPlayFieldY)
{
    *mPlayFieldY = newPlayFieldY;
}
