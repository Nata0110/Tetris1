#ifndef PAINTWALL_H
#define PAINTWALL_H


class PaintWall
{
public:
    PaintWall();
    int getPlayFieldX() const; // функція в класі називається метод

    int getPlayFieldY() const; // метод

    void setPlayFieldX(int newPlayFieldX);

    void setPlayFieldY(int newPlayFieldY);

private:
    int *mPlayFieldX; // змінні в класі називаються .....
    int *mPlayFieldY;
};

#endif // PAINTWALL_H
