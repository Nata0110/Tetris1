#include "baseapp.h"
#include <iostream>
#include <vector>

BaseApp::BaseApp() : X_SIZE(100), Y_SIZE(80)

  // д/з переробити з вектором, щоб запрацювало

{
  //  mChiBuffer = CHAR_INFO[((X_SIZE+1)*(Y_SIZE+1)*sizeof(CHAR_INFO))];
mChiBuffer.resize((X_SIZE+1)*(Y_SIZE+1));
mConsole = GetStdHandle(STD_OUTPUT_HANDLE);

mDwBufferSize.X = X_SIZE + 1;
mDwBufferSize.Y = Y_SIZE + 1;		// ������ ������ ������

mDwBufferCoord.X = 0;
mDwBufferCoord.Y = 0;				// ���������� ������

mLpWriteRegion.Left = 0;
mLpWriteRegion.Top = 0;
mLpWriteRegion.Right = X_SIZE + 1;
mLpWriteRegion.Bottom = Y_SIZE + 1;



        //=int CHAR_INFO //(((X_SIZE+1)*(Y_SIZE+1)*sizeof(CHAR_INFO)))
}
// BaseApp::~BaseApp();


void BaseApp:: SetChar(int x, int y, wchar_t c)
{
    mChiBuffer[x + (X_SIZE+1)*y].Char.UnicodeChar = c;
    mChiBuffer[x + (X_SIZE+1)*y].Attributes = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED; // атрибути ( для д/з з векторами не потрібно рухати)
}

void BaseApp::refreshScreen()
{
    if (!WriteConsoleOutput(mConsole, &mChiBuffer[0], mDwBufferSize, mDwBufferCoord, &mLpWriteRegion))

    {

        std::cout << "WriteConsoleOutput failed -" << "(" << GetLastError() << ")"  << std::endl;
    }
}







