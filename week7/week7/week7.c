#include <stdio.h>

int main(void) {
	char str[] = "Hello world! Hello ECE!";
	int result = str[sizeof(str) - 1] == '\0';
	printf("%d", result);
}