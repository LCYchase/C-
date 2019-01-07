//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main() {
	int a[5] = {0,2,4,6,8};
	int b[5] = {1,3,5,7,9};
	int k,j;
	for (int i = 0; i <5; i++) {
		k = a[i];
		a[i] = b[i];
		b[i] = k;
	}
	for (j = 0; j < 5; j++) {
		printf("%2d", a[j]);
	}
	for (j = 0; j < 5; j++) {
		printf("%2d", b[j]);
	}


	system("pause");
	return 0;
}