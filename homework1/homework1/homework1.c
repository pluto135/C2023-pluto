#include <stdio.h>

main(void) {



	char name[15], school[30]; // name�� �̸�, school �� �а��� ����

	int birthday, schoolnumber; // birthday�� �������, schoolnumber�� �й� ����

	printf("�̸� �Է� :"); 

	scanf_s("%s", name, sizeof(name)); // �̸� �Է�

	printf("������� �Է� :");

	scanf_s("%d", &birthday, sizeof(birthday)); // ������� �Է�

	printf("�й� �Է� :");

	scanf_s("%d", &schoolnumber, sizeof(schoolnumber)); // �й� �Է�

	printf("�а� �Է� :");

	scanf_s("%s", school, sizeof(school)); // �а��� �Է�

	printf("\n�̸� : %s\n������� : %d\n�й� : %d\n�а��� : %s", name, birthday, schoolnumber, school); // �̸�, �������, �й�, �а��� ���

}