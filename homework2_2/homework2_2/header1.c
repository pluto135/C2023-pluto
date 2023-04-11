#include <stdio.h>

int max_par(int a, int b) { //최대공약수를 반환하는 함수(정수자료형을 파라미터로 함)
    int i, j;
    int temp; //공약수를 저장할 변수
    if (a < b) { // j에 a,b중 더 작은수를 저장
        j = a;
    }
    else {
        j = b;
    }
    for (i = 1; i <= j; i++) { // 1부터 j까지의 수로 a,b를 나누면서 둘다 나머지가 0이되는 i를 temp에 저장
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    printf("%d\n", temp); // 결과값 출력
    return temp; // temp 값 반환
}
int max_input(void) { //최대공약수를 반환하는 함수(파라미터없이 수를 scanf로 받음)
    int i, j, a, b;
    printf("수a를 입력하시오: "); // 두수를 입력 받음
    scanf_s("%d", &a);
    printf("수b를 입력하시오: ");
    scanf_s("%d", &b);
    int temp; //공약수를 저장할 변수
    if (a < b) { // j에 a,b중 더 작은수를 저장
        j = a;
    }
    else {
        j = b;
    }
    for (i = 1; i <= j; i++) { // 1부터 j까지의 수로 a,b를 나누면서 둘다 나머지가 0이되는 i를 temp에 저장
        if (a % i == 0 && b % i == 0)
            temp = i;
    }
    printf("%d\n", temp); // 결과값 출력
    return temp; // temp 값 반환
}
int min_par(int a, int b) { // 최소공배수를 반환하는 함수(정수자료형을 파라미터로 함)
    int i, j;
    int temp; //공배수를 저장할 변수
    if (a > b) { // j에 a,b중 더 큰수를 저장
        j = a;
    }
    else {
        j = b;
    } 
    for (i = j;i <= a*b; i++) { //j부터 a*b까지의 수를 a,b로 나눠서 0이되는 가장 작은수를 temp에 저장
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    printf("%d\n", temp); //결과값 출력
    return temp; //temp값 반환
}
int min_input(void) { // 최소공배수를 반환하는 함수(파라미터없이 수를 scanf로 받음)
    int i, j, a, b;
    printf("수a를 입력하시오: "); // 두수를 입력 받음
    scanf_s("%d", &a);
    printf("수b를 입력하시오: ");
    scanf_s("%d", &b);
    int temp; //공배수를 저장할 변수
    if (a > b) { // j에 a,b중 더 큰수를 저장
        j = a;
    }
    else {
        j = b;
    }
    for (i = j; i <= a * b; i++) { //j부터 a*b까지의 수를 a,b로 나눠서 0이되는 가장 작은수를 temp에 저장
        if (i % a == 0 && i % b == 0) {
            temp = i;
            break;
        }
    }
    printf("%d\n", temp); //결과값 출력
    return temp; //temp값 반환
}
int prime_input(void) { // 소수를 판별하는 함수(파라미터없이 수를 scanf로 받음)
    int sum = 0; // 소수가 다른수로 나뉘는 횟수를 저장할 변수 선언
    int result = 0; // 결과값 저장할 변수 선언
    int a; // 판별받을 소수 저장할 변수 선언
    printf("소수인지 확인할 수를 입력하세요: "); //판별받을 소수 입력
    scanf_s("%d", &a);
    for (int i = 1; i <= a; i++) { // 1부터 a까지의 수로 a를 나눠 나머지가 0이되는 횟수를 sum에 저장
        if (a % i == 0) {
            sum = sum + 1;
        }
    }
    if (sum == 2) { //a가 1과 a로만 나뉘면 result값을 1로 바꾸기
        result = 1;
    }
    if (result == 1) { printf("true\n"); } //결과값 출력
    else { printf("false\n"); }
    return result; // result 반환
}
int prime_par(int a) { // 소수를 판별하는 함수(정수자료형을 파라미터로 함)
    int sum = 0; // 소수가 다른수로 나뉘는 횟수를 저장할 변수 선언
    int result = 0; // 결과값 저장할 변수 선언
    for (int i = 1; i <= a; i++) { // 1부터 a까지의 수로 a를 나눠 나머지가 0이되는 횟수를 sum에 저장
        if (a % i == 0) {
            sum = sum + 1;
        }
    }
    if (sum == 2) { //a가 1과 a로만 나뉘면 result값을 1로 바꾸기
        result = 1;
    }
    if (result == 1) { printf("true\n"); } //결과값 출력
    else { printf("false\n"); }
    return result; // result 반환
}