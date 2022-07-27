#include "startmenu.h"

void gotoxy(int x, int y) {
    COORD Pos;
    Pos.X = 2 * x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView()
{
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void textcolor(int foreground, int background)
{
    int color = foreground + background * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Startmenu() {
    int a = 0;
    int b = 0;
    system("mode con cols=60 lines=30 | title  Tetris");
    system("COLOR f0");
    char block[61] = "Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†Å†";

    for (int i = 0; i < 13; i++) std::cout << block << std::endl;

    gotoxy(0, 12); std::cout << "Å†Å†Å†Å°Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å†Å°Å°Å°Å†Å†Å†Å†" << std::endl;
    gotoxy(0, 13); std::cout << "Å†Å†Å†Å†Å°Å†Å†Å°Å†Å†Å†Å†Å°Å†Å†Å°Å†Å°Å†Å†Å°Å†Å†Å°Å†Å†Å†Å†Å†Å†" << std::endl;
    gotoxy(0, 14); std::cout << "Å†Å†Å†Å†Å°Å†Å†Å°Å°Å°Å†Å†Å°Å†Å†Å°Å°Å†Å†Å†Å°Å†Å†Å°Å°Å°Å†Å†Å†Å†" << std::endl;
    gotoxy(0, 15); std::cout << "Å†Å†Å†Å†Å°Å†Å†Å°Å†Å†Å†Å†Å°Å†Å†Å°Å†Å°Å†Å†Å°Å†Å†Å†Å†Å°Å†Å†Å†Å†" << std::endl;
    gotoxy(0, 16); std::cout << "Å†Å†Å†Å†Å°Å†Å†Å°Å°Å°Å†Å†Å°Å†Å†Å°Å†Å°Å†Å°Å°Å°Å†Å°Å°Å°Å†Å†Å†Å†" << std::endl;
    for (int i = 0; i < 5; i++) std::cout << block << std::endl;
    std::cout << block << std::endl;
    std::cout << "Å†Å†Å†Å†Å†Å†************************************Å†Å†Å†Å†Å†Å†" << std::endl;
    std::cout << "Å†Å†Å†Å†Å†Å†*" << std::endl;
    gotoxy(23, 24);
    std::cout << " *Å†Å†Å†Å†Å†Å†" << std::endl;
    std::cout << "Å†Å†Å†Å†Å†Å†*" << std::endl;
    gotoxy(23, 25);
    std::cout << " *Å†Å†Å†Å†Å†Å†" << std::endl;
    std::cout << "Å†Å†Å†Å†Å†Å†*" << std::endl;
    gotoxy(23, 26);
    std::cout << " *Å†Å†Å†Å†Å†Å†" << std::endl;
    std::cout << "Å†Å†Å†Å†Å†Å†************************************Å†Å†Å†Å†Å†Å†" << std::endl;
    gotoxy(0, 28); for (int i = 0; i < 1; i++) std::cout << block << std::endl;
    std::cout << block;
    gotoxy(13, 24); printf("1. START");
    gotoxy(13, 26); printf("2. EXIT");
    gotoxy(11, 24); printf(">>");
    while (a != 4) {
        a = ArrowkeyLogic();
        if (a == 2) {
            gotoxy(11, 24); printf(">>");
            gotoxy(11, 26); printf("    ");
            b = 1;
        }
        else if (a == 3) {
            gotoxy(11, 26); printf(">>");
            gotoxy(11, 24); printf("    ");
            b = 2;
        }
    }
    if (b == 2) {
        system("cls");
        exit(0);
    }
}

int ArrowkeyLogic() {
    const int Left = 0;
    const int Right = 1;
    const int Up = 2;
    const int Down = 3;
    const int Enter = 4;
    int arrowKey = _getch();
    if (arrowKey == 224) {
        arrowKey = _getch();
        switch (arrowKey) {
        case 75:
            return Left;
        case 77:
            return Right;
        case 72:
            return Up;
        case 80:
            return Down;
        }
    }
    else if (arrowKey == 13)
        return Enter;
}