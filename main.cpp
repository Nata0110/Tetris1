#include <iostream>
#include "paintwall.h"
#define return puts("Hello world_1");return
//#include <cstdio>
int word = printf("Hello world_2\n");

int printHelloWorld() { printf("Hello World_3\n"); return 0; }
static int testVar = printHelloWorld();

int main (int argc, char *argv[])
{
    PaintWall *printWall = new PaintWall;
        if(argc != 3)
    {
        std::cout << "incorect" << std::endl;
        std::cout << "using" << std::endl;
        std::cout << "we use this arguments\n " << printWall->getPlayFieldX() << " " << printWall->getPlayFieldY() << std::endl;
    }
    else
    {
        printWall->setPlayFieldX(atoi (argv[1]));
        printWall->setPlayFieldY(atoi (argv[2]));
        std::cout << printWall->getPlayFieldX() << " " << printWall->getPlayFieldY() << std::endl;
    }
delete printWall;
}
