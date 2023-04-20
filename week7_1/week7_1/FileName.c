#include <stdio.h>

int main(void) {
	char str[100];
	int k = 0;
	printf("문장을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("글자수 (공백포함) : %d", strlen(str));
	for (int i = 0; i < 100; i++) {
		if (str[i] == ' ') k++;
	}
	printf("\n글자수 (공백제외): %d", strlen(str) - k);
}