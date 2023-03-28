#include<stdio.h>
int average(int x, int y) {
	int z;
	z = (x + y) / 2;
	return z;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
	int z = 7;
	int i = 0;
	int sz = (sizeof(arr) / sizeof(arr[0])) - 1;
	int mid = 0;
	while (i <= sz) {
		mid = average(i, sz);
		if (arr[mid] > z) {
			sz = mid - 1;
		}
		else if (arr[mid] < z) {
			i = mid + 1;


		}
		else {
			printf("%d", mid);
			break;
		}
	}
	if (i > sz) {
		printf("ц╩сп");
	}
}
