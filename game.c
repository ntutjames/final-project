#include<stdio.h>
#include<stdlib.h>

void show_game(int board[][3])
{
	system("cls");
	int i, j;
	printf(" ");
	for (i = 0; i < 3; i++)
		printf("%4d  ", i + 1);
	printf("\n  |-----|-----|-----|\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d |", i + 1);
		char show[] = { 'X',' ','O' };
		for (j = 0; j < 3; j++)
			printf("%3c  |", show[board[i][j] + 1]);
		printf("\n  |-----|-----|-----|\n");;
	}

}
