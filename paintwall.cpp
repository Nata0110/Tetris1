#include "paintwall.h"

PaintWall::PaintWall()
{
    *mPlayFieldX = 16; // Alt+Enter  закидаємо в гетер i seter
    *mPlayFieldY = 20;
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
    mPlayFieldX = &newPlayFieldX;
}

void PaintWall::setPlayFieldY(int newPlayFieldY)
{
    mPlayFieldY = &newPlayFieldY;
}
