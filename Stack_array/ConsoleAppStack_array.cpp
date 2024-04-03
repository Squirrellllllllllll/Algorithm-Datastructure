#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <windows.h>
#include "MyWindows.cpp";
#include "stack.cpp";

using namespace std;

#define WIDTH 100
#define HEIGHT 30

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define LIGHTYELLOW 14
#define WHITE 15

int main()
{
    MyWindows console(5, 1, 60, 15, BLUE, WHITE);
    console.clearConsole();
    console.drawFrame();
    console.Write(" Stack - Array ", 2, 0, BLUE, WHITE);

    MyWindows error(5, 17, 60, 5, RED, WHITE);
    console.clearConsole();
    console.drawFrame();
    console.Write(" Notification ", 2, 0, RED, WHITE);

    MyWindows input(5, 23, 60, 5, GREEN, WHITE);
    console.clearConsole();
    console.drawFrame();
    console.Write(" Input ", 2, 0, GREEN, WHITE);
    input.gotoXY(1, 1);

    Stack stack;
    if (stack.isEmpty())
    {
        console.Write(" Stack is Empty ", 2, 1, BLUE, WHITE);
    }

    /*cout << endl << endl;
    cout << "Press any keyboard to end this program"
     */
    char c = getch();
}
