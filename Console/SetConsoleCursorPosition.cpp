#include <Windows.h>
#include <iostream>

using namespace std;

// Создайом функцию gotoxy для перемещения курсора по координатам x, y
void gotoxy(short x, short y)
{
    COORD p = { x, y };
    // Используэм структуру COORD с принятим нами названием p
    // https://narovol.narod.ru/_tbkp/New_MSDN_API/Console/str_coord.htm
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
    //Стандартные функции SetConsoleCursorPosition и GetStdHandle от WinApi
    // https://docs.microsoft.com/en-us/windows/console/getstdhandle
    // https://docs.microsoft.com/en-us/windows/console/setconsolecursorposition
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
