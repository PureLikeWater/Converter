#include"Area.h"

void square_millimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - square centimeters\n";
	cout << "\t2 - square decimeters\n";
	cout << "\t3 - square meters\n";
	cout << "\t4 - square kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.01 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_millimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.0001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_millimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_millimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000000000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_millimeters();
		break;
	case 5:
		system("CLS");
		Area();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		square_millimeters();
		break;
	}
}

void square_centimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - square millimeters\n";
	cout << "\t2 - square decimeters\n";
	cout << "\t3 - square meters\n";
	cout << "\t4 - square kilometers\n";
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
		square_centimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.01 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_centimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.0001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_centimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.0000000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_centimeters();
		break;
	case 5:
		system("CLS");
		Area();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		square_centimeters();
		break;
	}
}

void square_decimeters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - square millimeters\n";
	cout << "\t2 - square centimeters\n";
	cout << "\t3 - square meters\n";
	cout << "\t4 - square kilometers\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_decimeters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_decimeters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.01 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_decimeters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.00000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_decimeters();
		break;
	case 5:
		system("CLS");
		Area();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		square_decimeters();
		break;
	}
}

void square_meters() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - square millimeters\n";
	cout << "\t2 - square centimeters\n";
	cout << "\t3 - square decimeters\n";
	cout << "\t4 - square kilometers\n";
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
		square_meters();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_meters();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_meters();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 0.000001 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_meters();
		break;
	case 5:
		system("CLS");
		Area();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		square_meters();
		break;
	}
}

void square_kilometers() {
	cout << "Choose which unit you want to convert to:\n";
	cout << "\t1 - square millimeters\n";
	cout << "\t2 - square centimeters\n";
	cout << "\t3 - square decimeters\n";
	cout << "\t4 - square meters\n";
	cout << "\t5 - back to menu\n";
	int choose;
	cin >> choose;
	double num;
	switch (choose)
	{
	case 1:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_kilometers();
		break;
	case 2:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 10000000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_kilometers();
		break;
	case 3:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 100000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_kilometers();
		break;
	case 4:
		cout << "Input a number: ";
		cin >> num;
		cout << "Answer: " << num * 1000000 << endl;
		cout << "\nPress <Enter> to back";
		_getch();
		system("CLS");
		square_kilometers();
		break;
	case 5:
		system("CLS");
		Area();
		break;
	default:
		Color cl;
		cl.red();
		cout << "Error! You shose the wrong option. Try again. ";
		Sleep(1500);
		system("CLS");
		cl.white();
		square_kilometers();
		break;
	}
}

void Area() {
	cout << "Choose what you want to convert:\n";
	cout << "\t1 - square millimeters\n";
	cout << "\t2 - square centimeters\n";
	cout << "\t3 - square decimeters\n";
	cout << "\t4 - square meters\n";
	cout << "\t5 - square kilometers\n";
	cout << "\t6 - back to menu\n";
	int choose;
	cin >> choose;

	switch (choose)
	{
	case 1:
		system("CLS");
		square_millimeters();
		break;
	case 2:
		system("CLS");
		square_centimeters();
		break;
	case 3:
		system("CLS");
		square_decimeters();
		break;
	case 4:
		system("CLS");
		square_meters();
		break;
	case 5:
		system("CLS");
		square_kilometers();
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
		Area();
		break;
	}
}