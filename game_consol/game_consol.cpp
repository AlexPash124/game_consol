#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	char key;
	int i = 0;
	int x = 4, y = 5;
	int ox = 4, oy = 5;
	int ax = 2, ay = 2;
	int ball = 0;
while (ball!=21){
	    cout << ball;
		char mas[10][10] = { '#','#' ,'#' ,'#','#','#','#','#', '#','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#', ' ', ' ', ' ', ' ',' ',' ',' ',' ','#',
							'#','#' ,'#' ,'#','#','#','#','#', '#','#' };

		
		system("cls");

		mas[x][y] = '@';
		mas[ax][ay]= '*';
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << mas[i][j];
			}
			cout << endl;
		}
		
		key = _getch();

	

		if (key == 'w') x--;
		if (key == 's') x++;
		if (key == 'a') y--;
		if (key == 'd') y++;

		if (mas[y][x] == '#') {
			y = oy;
			x = oy;
		}
		if (x == ax && y == ay) {
			ball++;
			ax = rand() % 8 + 1;
			ay = rand() % 8 + 1;
		}
}
		
return 0;
	
}

