//�ҳ�100-200֮�������
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
	
	printf("�����ĸ���Ϊ��%d\n", k);

	system("pause");
	return 0;

}