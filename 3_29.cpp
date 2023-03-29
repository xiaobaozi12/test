//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0; int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d%d%d", a, b, c);
//	if (a < b) {
//		int tmp=0;
//		tmp=b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c) {
//		int tmp=0;
//		 tmp=c;
//		c = a;
//		a= tmp;
//	}
//	if (b < c) {
//		int tmp=0;
//		 tmp=c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//#include<stdio.h>
//int main() {
//	int a = 24;
//	int b = 18;
//	int n = 0;
//	while (a % b  ) {
//		n = a % b;
//		a = b;
//		b = n;
//
//	}
//	printf("%d", n);
//}
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void guess() {
	int ret = 0;
	rand();
	ret = rand() % 100 + 1;
	printf("请猜数字\n");
	int i = 0;
	for (i = 0; i < 9; i++) {
		int a;
		scanf("%d", &a);
		if (a > ret) {
			printf("猜大了\n");

		}
		if (a < ret) {
			printf("猜小了\n");
			//printf("i=%d\n", i);

		}
		if (a == ret) {
			printf("正确\n");
			break;

		}
	}
	if (i == 9) {
		printf("输入次数过多\n");
	}
}
int main() {
	srand((unsigned int)time(NULL));
	int jub = 0;
	do {
		printf("***********************\n");
		printf("*****1开始   0结束*****\n");
		printf("***********************\n");
		scanf("%d", &jub);
		switch (jub) {
		case 1:
			guess();
			break;
		case 0:
			printf("结束\n");
			break;
		default:
			printf("输入错误\n");

		}
	} while (jub);
}