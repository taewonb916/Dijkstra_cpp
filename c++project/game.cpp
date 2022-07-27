#include "game.h"
#include "startmenu.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>							// gotoxy();
#include<conio.h>								//_getch();
#include <stdlib.h>   

void Game() {
    system("cls");
    char block[61] = "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□";
    std::cout << block << std::endl;
    for (int i = 0; i < 29; i++) {
        gotoxy(0, i); std::cout << "□";
        gotoxy(29, i); std::cout << "□";
    }
    std::cout << block;
    gotoxy(2, 5);  std::cout << "■■■■■■■■■■■■";
    gotoxy(2, 26);  std::cout << "■■■■■■■■■■■■■";
    for (int i = 5; i < 26; i++) {
        gotoxy(2, i); std::cout << "■";
        gotoxy(14, i); std::cout << "■";
    }
    gotoxy(3, 9); std::cout << "----------------------";

    _getch();
}