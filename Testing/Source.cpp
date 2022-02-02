#include"Converter.h"
#include"Calculate_Area.h"
#include"Source.h"

int Window() {
    int choose;
    cout << "Sellect option:\n";

    cout << "\t1 - converter\n";
    cout << "\t2 - calculate area\n";
    cout << "\t3 - exit\n";

    cin >> choose;
    switch (choose)
    {
    case 1:
        system("CLS");
        ConWin();
        break;
    case 2:
        system("CLS");
        CalcWin();
    case 3:
        system("CLS");
        exit(0);
    default:
        Color cl;
        cl.red();
        cout << "Error! You shose the wrong option. Try again. ";
        Sleep(1500);
        system("CLS");
        cl.white();
        Window();
        break;
    }

    return 0;
}

int main() {

    Window();

    return 0;
}