#include <stdio.h>
#include <stdlib.h>
int check_game(int board[][3], int type_x, int count) {
	int i, j;
	int win = 0;

	printf("type_x: %d\n", type_x);
	printf("count: %d\n", count);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			win += board[i][j];
		}
		if (win == 3) {
			printf("OĹ�F");
			return 1;
		}
		else if (win == -3) {
			printf("XĹ�F");
			return -1;
		}
		win = 0;
	}

	i = 0, j = 0;
	win = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			win += board[j][i];
		}
		if (win == 3) {
			printf("OĹ�F");
			return 1;
		}
		else if (win == -3) {
			printf("XĹ�F");
			return -1;
		}
		win = 0;
	}


	win = board[0][0] + board[1][1] + board[2][2];
	if (win == 3) {
		printf("OĹ�F");
		return 1;
	}
	else if (win == -3) {
		printf("XĹ�F");
		return -1;
	}

	win = board[0][2] + board[1][1] + board[2][0];
	if (win == 3) {
		printf("OĹ�F");
		return 1;
	}
	else if (win == -3) {
		printf("XĹ�F");
		return -1;
	}

	if (count == 9) {
		printf("����!!!!\n");
	}



	return 0;
}