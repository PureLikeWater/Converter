#include"Converter.h"
#include"Length.h"
#include"Area.h"
#include"Volume.h"

int ConWin() {
	int choose;
	cout << "Sellect option: \n\t";
	cout << "1 - length\n\t";
	cout << "2 - area\n\t";
	cout << "3 - volume\n\t";
	cout << "4 - back to menu\n";
	cin >> choose;
	switch (choose)
	{
	case 1:
		system("CLS");
		Length();
		break;
	case 2:
		system("CLS");
		Area();
		break;
	case 3:
		system("CLS");
		Volume();
		break;
	case 4:
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
		ConWin();
		break;
	}
	return 0;
}