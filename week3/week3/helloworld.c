#include <stdio.h>
main(void) {
	
	int a;
	char b;

	scanf_s("%d", &a);
	scanf_s("%c", &b, 1); // b�� �Է� <-�̷������� �ּ��ޱ�
	printf("�Է¹���a�� : %d \n");
/*
�������������ô�������Ǥ�*/
}