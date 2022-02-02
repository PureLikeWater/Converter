#include"Win_Color.h"

#define GREEN 10
#define MAGENTA 13
#define WHITE 7
#define RED 12

void Color::green() {
	SetConsoleTextAttribute(hConsole, GREEN);
}

void Color::magenta() {
	SetConsoleTextAttribute(hConsole, MAGENTA);
}

void Color::white() {
	SetConsoleTextAttribute(hConsole, WHITE);
}

void Color::red() {
	SetConsoleTextAttribute(hConsole, RED);
}