#include <stdio.h>

int main(void) {
	char str[100];
	int k = 0;
	printf("������ �Է��ϼ��� : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("���ڼ� (��������) : %d", strlen(str));
	for (int i = 0; i < 100; i++) {
		if (str[i] == ' ') k++;
	}
	printf("\n���ڼ� (��������): %d", strlen(str) - k);
}