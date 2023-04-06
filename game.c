#include<stdio.h>
#include"game.h"
void InitBoard(char board[ROW1][COL1], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//	void DisplayBoard(char board[ROW1][COL1], int row, int col){
//		int i = 0;
//		for (i = 0; i < row; i++) {
//			printf("%c  |%c  |%c  \n", board[i][0], board[i][1], board[i][2]);
//			if (i < row - 1) {
//				printf("__|__|__\n");
//			}
//		}
//
//}//初始化数组
//
void DisplayBoard(char board[ROW1][COL1], int row, int col) {
	int i = 0;
	
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf("%c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		
			if (i< row - 1) {
				for (j = 0; j < row; j++) {
					printf("--");
					if (j < row - 1)
						printf("|");
				}
				printf("\n");

			}
		}
	}
void playermove(char board[ROW1][COL1], int row, int col) {
	int a = 0;
	int b = 0;
	while (1) {
		printf("请输入坐标\n");
		scanf("%d%d", &a, &b);
		if (1 <= a && a <= row && 1 <= b && b <= row) {
			if (board[a-1][b-1] ==' ') {
				board[a-1][b-1] = '*';
				break;
			}
			else
				printf("此位置已经占用\n");

		}
		else
			printf("输入错误请重新输入\n");
	}
}
void computermove(char board[ROW1][COL1], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % row;
		y = rand() % row;

		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;

		}

	}
}
char Isfull(char board[ROW1][COL1], int row, int col) {
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++) {
		for (y = 0; y < col; y++) {
			if (board[x][y] == ' ')
				return'C';
		}
	}
	return 1;

}
char win(char board[ROW1][COL1], int row, int col) {
	int i = 0;
	int b = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (i = 0; i < row; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
		return board[2][0];
	if (Isfull(board,row,col) == 1) {
		return 'Q';
	}
}
