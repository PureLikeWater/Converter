#include"Volume.h"

void cubic_millimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic centimeters\n";
	cout << "\t2 - cubic decimeters\n";
	cout << "\t3 - cubic meters\n";
	cout << "\t4 - liters\n";
	cout << "\t5 - milliliters\n";
	cout << "\t6 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_millimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_millimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_millimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_millimeters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_millimeters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		cubic_millimeters();
		break;
	}
}

void cubic_centimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic decimeters\n";
	cout << "\t3 - cubic meters\n";
	cout << "\t4 - liters\n";
	cout << "\t5 - milliliters\n";
	cout << "\t6 - back to menu\n";
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
		cubic_centimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_centimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_centimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_centimeters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_centimeters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		cubic_centimeters();
		break;
	}
}

void cubic_decimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic centimeters\n";
	cout << "\t3 - cubic meters\n";
	cout << "\t4 - liters\n";
	cout << "\t5 - milliliters\n";
	cout << "\t6 - back to menu\n";
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
		cubic_decimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_decimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_decimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_decimeters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_decimeters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		cubic_decimeters();
		break;
	}
}

void cubic_meters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic centimeters\n";
	cout << "\t3 - cubic decimeters\n";
	cout << "\t4 - liters\n";
	cout << "\t5 - milliliters\n";
	cout << "\t6 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_meters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_meters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_meters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_meters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		cubic_meters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		cubic_meters();
		break;
	}
}

void liters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic centimeters\n";
	cout << "\t3 - cubic decimeters\n";
	cout << "\t4 - cubic meters\n";
	cout << "\t5 - milliliters\n";
	cout << "\t6 - back to menu\n";
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
		liters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		liters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		liters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		liters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		liters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		liters();
		break;
	}
}

void milliliters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic centimeters\n";
	cout << "\t3 - cubic decimeters\n";
	cout << "\t4 - cubic meters\n";
	cout << "\t5 - liters\n";
	cout << "\t6 - back to menu\n";
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
		milliliters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		milliliters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		milliliters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		milliliters();
		break;
	case 5:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		milliliters();
		break;
	case 6:
		system("CLS");
		Volume();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		milliliters();
		break;
	}
}

void Volume() {
	cout << "Choose what you want to convert:\n";
	cout << "\t1 - cubic millimeters\n";
	cout << "\t2 - cubic centimeters\n";
	cout << "\t3 - cubic decimeters\n";
	cout << "\t4 - cubic meters\n";
	cout << "\t5 - liters\n";
	cout << "\t6 - milliliters\n";
	cout << "\t7 - back to menu\n";
	int choose;
	cin >> choose;

	switch (choose)
	{
	case 1:
		system("CLS");
		cubic_millimeters();
		break;
	case 2:
		system("CLS");
		cubic_centimeters();
		break;
	case 3:
		system("CLS");
		cubic_decimeters();
		break;
	case 4:
		system("CLS");
		cubic_meters();
		break;
	case 5:
		system("CLS");
		liters();
		break;
	case 6:
		system("CLS");
		milliliters();
		break;
	case 7:
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
		Volume();
		break;
	}
}