#include"Calculate_Area.h"

void square() {
	cout << "Input side of square: ";
	double len;
	cin >> len;
	cout << "\nAnswer: " << len * len << endl;
	cout << "\nPress <Enter> to back";
	_getch();
	system("CLS");
	CalcWin();
};

void triangle() {
	cout << "Input base of triangle: ";
	double len;
	cin >> len;
	cout << "\nInput height of triangle: ";
	double height;
	cin >> height;
	cout << "\nAnswer: " << 0.5 * len * height << endl;
	cout << "\nPress <Enter> to back";
	_getch();
	system("CLS");
	CalcWin();
};

void circle() {
	cout << "Input radius: ";
	double radius;
	cin >> radius;
	cout << "\nAnswer: " << 3.14 * radius * radius << endl;
	cout << "\nPress <Enter> to back";
	_getch();
	system("CLS");
	CalcWin();
};

void rectangle() {
	cout << "Input the first length side of rectangle: ";
	double flen;
	cin >> flen;
	cout << "\nInput the second lenght side of rectangle: ";
	double slen;
	cin >> slen;
	cout << "\nAnswer: " << flen * slen << endl;
	cout << "\nPress <Enter> to back";
	_getch();
	system("CLS");
	CalcWin();
};

void rhombus() {
	cout << "Input the first diagonal: ";
	double fdiag;
	cin >> fdiag;
	cout << "\nInput the second diagonal: ";
	double sdiag;
	cin >> sdiag;
	cout << "\nAnswer: " << 0.5 * fdiag * sdiag << endl;
	cout << "\nPress <Enter> to back";
	_getch();
	system("CLS");
	CalcWin();
};

int CalcWin() {
	int choose;
	cout << "Sellect option:\n\t";
	cout << "1 - square\n\t";
	cout << "2 - triangle\n\t";
	cout << "3 - circle\n\t";
	cout << "4 - rectangle\n\t";
	cout << "5 - rhombus\n\t";
	cout << "6 - back to menu\n";
	cin >> choose;
	switch (choose) {
	case 1:
		system("CLS");
		square();
		break;
	case 2:
		system("CLS");
		triangle();
		break;
	case 3:
		system("CLS");
		circle();
		break;
	case 4:
		system("CLS");
		rectangle();
		break;
	case 5:
		system("CLS");
		rhombus();
		break;
	case 6:
		system("CLS");
		Window();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		CalcWin();
		break;
	}
	return 0;
};