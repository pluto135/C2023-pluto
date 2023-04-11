#include <stdio.h>

void dec2oth(int n, int a) { // dec2oth 함수선언
    int r; // 변환할 수를 진법으로 나눈 나머지를 넣을 변수 선언
    r = n % a;
    if (n >= a) { // 변환할 수가 진법보다 큰경우 수를 진법으로 나눈값을 다시 함수에 넣고 재귀함수 실행, 수가 진법보다 작을경우 결과 출력
        dec2oth(n / a, a); 
    } 
    if (r < 10) { // 10진수로 나타낼수 있을경우 그대로 출력
        printf("%d", r);
    }
    else { // 10진수로 나타낼수 없을경우 55를 더해 아스키코드로 바꿔 출력
        printf("%c", r + 55);
    }
    return; // 결과값 반환
}
int main(void) {
    int a, num; // 변환할 수, 진법 넣을 변수 선언
    printf("변환할 10진수 입력 : ");
    scanf_s("%d", &num); // 변환할 수 입력
    printf("변환할 진법 입력 (2-16): ");
    scanf_s("%d", &a); // 변환할 진법 입력
    printf("%d의 %d진수 변환 값 : ",num, a); // 결과값 출력을 위한 설명 출력
    dec2oth(num, a); // 합수값 반환
}

