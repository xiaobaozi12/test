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
#include<stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("亲输入（取消）取消关机");
//	scanf("%s", input);
//	if (strcmp(input, "取消") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//}
//#include<stdio.h>
//void swap1(int* px, int* py) {
//	int c = 0;
//	c = *px;
//	*px = *py;
//	*py = c;
// }
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap1(&a, &b);
//	printf("a=%d b=%d", a, b);
//}
//
//#include<stdio.h>
//int is_leap_year(int n) {
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	int year;
//	for (year = 1000; year < 2000; year++) {
//		if (1 == is_leap_year(year)) {
//			printf("%d\n", year);
//		}
//	}
//}
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz) {
//	int right = 0;
//	int left = 0;
//	right = sz - 1;
//	while (left <= right) {
//		int mid = (right + left) / 2;
//		if (k > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (k < arr[mid]) {
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = binary_search(arr, k,sz);
//	if (ret == -1) {
//		printf("查不到");
//	}
//	else {
//		printf("下标是%d", ret);
//	}
//
//#include<stdio.h>
//#include"Add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum;
//	sum=Add(a, b);
//	printf("%d", sum);递归
#include<stdio.h>
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
#include<stdio.h>
//int my_stlen(char* a) {
//	int count = 0;
//	while (*a != '\0') {
//		count++;
//		a++;
//
//	}
//	return count;
//}
//int my_stlen(char* a) {
//	if (*a != '\0') {
//		return 1 + my_stlen(a + 1);
//	}
//	else
//		return 0;
//}
//int main() {
//	char arr[] = "hello";
//	int  a;
//	a = my_stlen(arr);
//	printf("%d", a);
//}


//3_31
//#include<stdio.h>
//int Fac(int a) {
//	if (a <= 1)
//		return 1;
//	else
//		return a*Fac(a - 1);
//}
//int main() {
//	int ret = 0;
//	int a = 0;
//	scanf("%d", &a);
//	ret = Fac(a);
//	printf("%d", ret);
//}
//斐波纳挈数列
//#include<stdio.h>
//int Fid(int n) {
//	/*if (n <= 2)
//		return 1;
//	else
//		return Fid(n - 1) + Fid(n - 2);*/
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int ret = Fid(n);
//	printf("第%d个斐波纳挈数是%d\n", n, ret);
//	return 0;
//}
//青蛙跳台阶
#/*include<stdio.h>
int jisuan(int a) {
	if (a <= 2) {
		return a;
	}
	else
		return jisuan(a - 2) + jiusan(a - 1);
}
int main(){
	int  taijie = 0;
	scanf("%d", &taijie);
	int a = jisuan(taijie);
	printf("%d", a);
	return 0;
}*/
//汉诺塔问题
//#include<stdio.h>
//void move(char a, char c) {
//	printf(" % c-> % c\n", a, c);
//}
//void Fra(int n, char a, char b, char c)
//{
//	if (n == 1) {
//		move(a, c);
//	}
//	else {
//		Fra(n - 1, a, c, b);
//		move(a, c);
//		Fra(n - 1, b, a, c);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	Fra(n, 'a', 'b', 'c');
//	return 0;
//}
#include<stdio.h>
void bubble_sort(int arr[],int sz) {
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	for (i = 0; i <sz - 1; i++) {
		for (j = 0; j <sz - 1 - i; j++) {
			
			if (arr[j] < arr[j + 1]) {
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}

}
int main() {
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10, };
	
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
}
//#include<stdio.h>
////int main() {
////	int a = 0;
////	int b = 0;
////	scanf("%d", &a);
////	int count = 0;
////	for (b = 0; b < 32 ; b++) {
////		if (1 == ((a >>b ) & 1)) {
////			count++;
////		}
////	}
////	printf("%d", count);
////	return 0;
////}
//struct stu {
//	char name[10];
//	int age;
//	char munber[10];
//};
//#include<stdio.h>
//int main() {
//	struct stu s1={"张三", 10,"12131313"};
//	struct stu* sp = &s1;
//	printf("%s", sp->name);
//	//printf("%s", (*sp).name);
//	//printf("%s\n", s1.name);
//	return 0;
//}

//
//#include<stdio.h>
//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p", pc);
//	return 0;
//}
#include<stdio.h>
//
//	int** ppa = &pa;
//	printf("%d", **ppa);
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//}int main() {
//	int a = 0;
//	int* pa = &a;
//	pa = NULL;
//	*pa = 10;
//	return 0;
//}
//int mystlen(char* re) {
//	char* aga = re;
//	char* end = re;
//	while (*end != '\0') {
//		end++;
//		//printf("1");
//	}
//	return aga - end;
//
//}
//int main() {
//	char arr[10] = "lol";
//	int ret=mystlen(arr);
//	printf("%d", -ret);
//}
//int main() {
//	int arr[] = { 0,1,2,3,4,5,6,7,8 };
//	int* p = arr;
//	int i = 0;
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < ret; i++) {
//		printf("%p==========%p\n", p + i, &arr[i]);
//	}
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//int main(){
printf("hello,word")}
