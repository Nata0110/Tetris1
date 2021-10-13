#include "paintwall.h"

PaintWall::PaintWall()
{

    int mPlayFieldX = 16; // Alt+Enter  закидаємо в гетер i seter
    int mPlayFieldY = 20;
}

PaintWall::~PaintWall() // деструктор. натискаємо Alt+Enter -> вибираємо "Додати визначення до paintwall.h"
{
    //delete mPlayFieldX; //
    //delete mPlayFieldY;
}

int PaintWall::getPlayFieldX() const
{
    return mPlayFieldX;
}

int PaintWall::getPlayFieldY() const
{
    return mPlayFieldY;
}

void PaintWall::setPlayFieldX(int newPlayFieldX)
{
    mPlayFieldX = newPlayFieldX;
}

void PaintWall::setPlayFieldY(int newPlayFieldY)
{
    mPlayFieldY = newPlayFieldY;
}

void PaintWall::setWalls()
{
    for (int x = 0; x <= X_SIZE; x++)
                SetChar(x, 0, CHAR_SIDE);

            for (int x = 0; x <= X_SIZE; x++)
                SetChar(x, mPlayFieldY, CHAR_SIDE);

            for (int x = 0; x <= X_SIZE; x++)
                SetChar(x, Y_SIZE, CHAR_SIDE);

            for (int y = 0; y <= Y_SIZE; y++)
                SetChar(0, y, CHAR_SIDE);

            for (int y = 0; y <= Y_SIZE; y++)
                SetChar(mPlayFieldX, y, CHAR_SIDE);

            for (int y = 0; y <= Y_SIZE; y++)
                SetChar(X_SIZE, y, CHAR_SIDE);
}

