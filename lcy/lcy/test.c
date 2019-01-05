//找出100-200之间的素数
#include<stdio.h>
#include<stdlib.h>

void main() {
	int i, j,k=0;
	for (i = 100; i <= 200; i++) {
		for (j = 2; j <= i; j++) {
			if (i%j == 0) {
				break;
			}			
		}
		if (i == j) {
			printf("%d\n", i);
			k++;
		}
	}
	
	printf("素数的个数为：%d\n", k);

	system("pause");
	return 0;

}