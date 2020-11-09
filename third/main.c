#include <stdio.h>
<<<<<<< HEAD
#include <string.h>

int main() {
    SetConsole

    return 0;
}
=======
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define START_I 23
#define START_J 0
#define END_I 0
#define END_J 79

int disp[25][80] = { 0 };
int cur_i, cur_j, cur_dir, top_left_corner, i, j;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void displayArray2D() {
	for (i = 0; i < 24; i++) {
		for (j = 0; j < 80; j++) {
			if (disp[i][j] != 0) {
				gotoxy(j, i);
				putchar('X');
			}
		}
	}
}

int checkBorder() { // 0 = NO, 1 = LEFT, 2 = RIGHT, 3 = TOP, 4 = BOTTOM
	if (cur_i >= 0 && cur_i <= 23 && cur_j == 0) {
		return 1;
	} else if (cur_i >= 0 && cur_i <= 23 && cur_j == 79) {
		return 2;
	} else if (cur_j > 0 && cur_i == 0) {
		return 3;
	} else if (cur_j > 0 && cur_i == 23) {
		return 4;
	} else {
		return 0;
	}
}

int main()
{
	cur_i = START_I, cur_j = START_J, cur_dir = 0; // cur_dir: 0 = NONE, 1 = DOWN, 2 = UP

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);

	disp[cur_i][cur_j] = 1;
	displayArray2D();

	while (cur_i != END_I || cur_j != END_J) {
		if (cur_i == START_I && cur_j == START_J) {
			cur_i -= 1;
			disp[cur_i][cur_j] = 1;
			displayArray2D();
			cur_dir = 1;
		}
		else {
			if (cur_dir == 0) {
				if (checkBorder() == 1) {
					cur_i += 1;
					cur_j += 1;
					disp[cur_i][cur_j] = 1;
					displayArray2D();
					cur_dir = 1;
				}
				else if (checkBorder() == 2) {
					cur_i -= 1;
					cur_j -= 1;
					disp[cur_i][cur_j] == 1;
					displayArray2D();
					cur_dir = 2;
				}
				else if (checkBorder() == 3) {
					cur_j += 1;
					disp[cur_i][cur_j] = 1;
					displayArray2D();
					cur_dir = 1;
				}
				else if (checkBorder() == 4) {
					cur_j += 1;
					disp[cur_i][cur_j] = 1;
					displayArray2D();
					cur_dir = 2;
				}
			} else if (cur_dir == 1) {
				if (cur_i != 23) {
					cur_i += 1;
					cur_j += 1;
					disp[cur_i][cur_j] = 1;
					displayArray2D();
				}
				else {
					cur_dir = 0;
				}
			} else if (cur_dir == 2) {
				if (cur_j != 0) {
					if (cur_i == 0) {
						cur_dir = 0;
					}
					else {
						cur_j -= 1;
						cur_i -= 1;
						disp[cur_i][cur_j] = 1;
						displayArray2D();
					}
				}
				else {
					cur_i -= 1;
					cur_dir = 0;
					disp[cur_i][cur_j] = 1;
					displayArray2D();
				}
			}
		}
		Sleep(10);
	}

	_getche();
	return 0;
}
>>>>>>> 9614dbd61c6c1db5c6d33bfba4a597a590d32e08
