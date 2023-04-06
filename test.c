
#include"game.h"
void menu() {
	printf("****************************\n");
	printf("*******0结束  1开始 ********\n");
	printf("****************************\n");
}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');//初始化
	//display(show, ROW, COL);
	//display(mine, ROW, COL);
	setmine(mine, ROW, COL);
	display(mine, ROW, COL);
	display(show, ROW, COL);
	findmine(show,mine, ROW, COL);
}
void test() {

	int ret = 0;
	srand((unsigned)time(NULL));
	do {
		menu();

		scanf("%d", &ret);
		switch (ret) {
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("输入错误\n");
		}
	} while (ret);
}

int main() {
	test();
	return 0;
}