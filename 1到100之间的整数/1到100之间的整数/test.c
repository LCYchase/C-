//����1��100֮���������
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j=0;
	for (i = 1; i < 100; i++) {
		if (i % 10 == 9) {
			j++;
		}
		if(i/10==9){
			j++;
		}
	}
	printf("%d\n", j);
	system("pause");
	return 0;
}