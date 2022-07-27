/*
title: Tetris Game
Start-Date: 2022-04-08
End-Date: 2022-04-
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "startmenu.h"
#include "game.h"
#include "block.h"
//using namespace std;


int main() {
    CursorView();
    Startmenu();
    Game();
    gotoxy(20,10);
    block();

	return 0;

}