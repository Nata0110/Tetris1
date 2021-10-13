#include <iostream>
#include "paintwall.h"
 // Виводить "Hello world"  не використовуючи функцію main
struct PrintWorld
{
    PrintWorld()
    {
        std::cout << "Hello world" << std::endl;
    }
};
PrintWorld print;

// початок тетріса
int main (int argc, char *argv[])
{
    PaintWall printWall;
            if(argc != 3)

    {
        std::cout << "incorect" << std::endl;
        std::cout << "using" << std::endl;
        std::cout << "we use this arguments\n " << printWall.getPlayFieldX() << " " << printWall.getPlayFieldY() << std::endl;
    }
    else
    {
        printWall.setPlayFieldX(atoi (argv[1]));
        printWall.setPlayFieldY(atoi (argv[2]));
        std::cout << printWall.getPlayFieldX() << " " << printWall.getPlayFieldY() << std::endl;
    }

            printWall.setWalls();
            printWall.refreshScreen();
//delete printWall;
}
