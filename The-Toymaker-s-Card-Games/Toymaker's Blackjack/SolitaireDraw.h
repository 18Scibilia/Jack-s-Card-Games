#pragma once
#include <windows.h>
#include <iostream>
#include <tchar.h>
class SolitaireDraw
{
public:
	// Global Function Declarations

	bool setxychar(int x, int y, const char* pBuf, int len, WORD ColorAttrib = NULL);
	bool setxychar(int x, int y, char Buf, WORD ColorAttrib = NULL);
	void gotoxy(int column, int line);
	SolitaireDraw();
	~SolitaireDraw();
private:

};

