#include<stdio.h>
#include"game.h"
void menu(){
	    printf("*********************************\n");
		printf("***********1��ʼ    0����********\n");
		printf("**********************************\n");
}//�б�
void game() {
	char ret;
	char board[ROW1][COL1] = {0};
	 InitBoard(board, ROW1, COL1);//��ʼ������
	
	 //printf("%c", board[1][1]);
	 DisplayBoard(board, ROW1, COL1);//��ӡ����
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
		 printf("���Ӯ\n");
	 }
	 else if (ret == '#') {
		 printf("����Ӯ\n");
	 }
	 else
		 printf("ƽ��\n");
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
			game();//������Ϸ
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);//ѡ���Ƿ������Ϸ

}

int main() {
	test();
}