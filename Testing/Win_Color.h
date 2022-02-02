#pragma once
#ifndef __WIN_COLOR__
#define __WIN_COLOR__
#include"Source.h"
class Color{
private:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	void green();
	void magenta();
	void white();
	void red();
};
#endif // !__WIN_COLOR__
