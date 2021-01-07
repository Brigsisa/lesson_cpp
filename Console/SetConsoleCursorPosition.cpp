#include <Windows.h>
#include <iostream>

using namespace std;

void gotoxy(short x, short y)
{
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int main()
{
    gotoxy(0, 0);
    cout << "Hello 0_0!";
    gotoxy(6, 1);
    cout << "Hello 6_1!";
    gotoxy(12, 2);
    cout << "Hello 12_2!";
    gotoxy(0, 5);

    cout << "Hello World 0_5!\n";

    return 0;
    
        
}
