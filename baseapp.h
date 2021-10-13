#ifndef BASEAPP_H
#define BASEAPP_H

#include <windows.h>
#include <vector>


class BaseApp
{
public:
    BaseApp();
    //~BaseApp();



    const int X_SIZE;
    const int Y_SIZE;

    void refreshScreen();
protected:
    void SetChar(int x, int y, wchar_t c);
private:
  //  CHAR_INFO *mChiBuffer;


std::vector <CHAR_INFO> mChiBuffer;
HANDLE mConsole;
COORD mDwBufferSize;
COORD mDwBufferCoord;
SMALL_RECT mLpWriteRegion;

};

#endif // BASEAPP_H
