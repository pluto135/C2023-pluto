#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("������ �Է��ϼ��� : ");
    fgets(str, sizeof(str), stdin);
    

    int len_with_space = strlen(str); // ��ü ���ڼ�
    int len_without_space = 0; // �������� ���ڼ�
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            len_without_space++;
        }
    }

    printf("���ڼ� (��������): %d\n", len_with_space);
    printf("���ڼ� (��������): %d\n", len_without_space);

    return 0;
}