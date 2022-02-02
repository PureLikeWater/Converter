#include"Length.h"

void millimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - centimeters\n";
	cout << "\t2 - decimeters\n";
	cout << "\t3 - meters\n";
	cout << "\t4 - kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.1 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		millimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.01 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		millimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		millimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		millimeters();
		break;
	case 5:
		system("CLS");
		Length();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		millimeters();
		break;
	}
}

void centimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - millimeters\n";
	cout << "\t2 - decimeters\n";
	cout << "\t3 - meters\n";
	cout << "\t4 - kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		centimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.1 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		centimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.01 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		centimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.00001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		centimeters();
		break;
	case 5:
		system("CLS");
		Length();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		centimeters();
		break;
	}
}

void decimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - millimeters\n";
	cout << "\t2 - centimeters\n";
	cout << "\t3 - meters\n";
	cout << "\t4 - kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		decimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		decimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.1 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		decimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.0001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		decimeters();
		break;
	case 5:
		system("CLS");
		Length();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		decimeters();
		break;
	}
}

void meters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - millimeters\n";
	cout << "\t2 - centimeters\n";
	cout << "\t3 - decimeters\n";
	cout << "\t4 - kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		meters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		meters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		meters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		meters();
		break;
	case 5:
		system("CLS");
		Length();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		meters();
		break;
	}
}

void kilometers() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - millimeters\n";
	cout << "\t2 - centimeters\n";
	cout << "\t3 - decimeters\n";
	cout << "\t4 - meters\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		kilometers();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		kilometers();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		kilometers();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		kilometers();
		break;
	case 5:
		system("CLS");
		Length();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		kilometers();
		break;
	}
}

void Length() {
	cout << "Choose what you want to convert:\n";
	cout << "\t1 - millimeters\n";
	cout << "\t2 - centimeters\n";
	cout << "\t3 - decimeters\n";
	cout << "\t4 - meters\n";
	cout << "\t5 - kilometers\n";
	cout << "\t6 - back to menu\n";
	int choose;
	cin >> choose;
	
	switch (choose)
	{
	case 1:
		system("CLS");
		millimeters();
		break;
	case 2:
		system("CLS");
		centimeters();
		break;
	case 3:
		system("CLS");
		decimeters();
		break;
	case 4:
		system("CLS");
		meters();
		break;
	case 5:
		system("CLS");
		kilometers();
		break;
	case 6:
		system("CLS");
		ConWin();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		Length();
		break;
	}
}