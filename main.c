#include "gameplay.h"
#include <stdio.h>
#include <stdlib.h>
const int ROW = 3;
const int COL = 3;
int main()
{
	int board[3][3] = { 0 };
	int count=0; // number of X and O have has been placed
	int type_x = 1;// player: true = X, false = O
	show_game(board);// show the play board
	while (1)
	{
		play_game(board, type_x, &count); // place one X or O
		show_game(board);
		if (check_game(board, type_x, count))// win or tie
			break;
		if (count == 9)
			break;
		type_x = !type_x;// swap player
	}
	system("PAUSE");
	return 0;
}









