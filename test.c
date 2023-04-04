#include<stdio.h>
#include"game.h"
void menu(){
	    printf("*********************************\n");
		printf("***********1开始    0结束********\n");
		printf("**********************************\n");
}//列表
void game() {
	char ret;
	char board[ROW1][COL1] = {0};
	 InitBoard(board, ROW1, COL1);//初始化棋盘
	
	 //printf("%c", board[1][1]);
	 DisplayBoard(board, ROW1, COL1);//打印棋盘
	 while(1) {
		 playermove(board, ROW1, COL1);
		 //DisplayBoard(board, ROW1, COL1);
		 ret=win(board, ROW1, COL1);
		 
		 if (ret != 'C') {
			 break;
		 }
		 computermove(board, ROW1, COL1);
		 DisplayBoard(board, ROW1, COL1);
		 ret=win(board, ROW1, COL1);
		 if (ret != 'C') {
			 break;
		 }

	 }if (ret == '*') {
		 printf("玩家赢\n");
	 }
	 else if (ret == '#') {
		 printf("电脑赢\n");
	 }
	 else
		 printf("平局\n");
}//
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 0:
			break;
		case 1:
			game();//进入游戏
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);//选则是否进入游戏

}

int main() {
	test();
}