#include <stdio.h>

main(void) {



	char name[15], school[30]; // name에 이름, school 에 학과명 저장

	int birthday, schoolnumber; // birthday에 생년월일, schoolnumber에 학번 저장

	printf("이름 입력 :"); 

	scanf_s("%s", name, sizeof(name)); // 이름 입력

	printf("생년월일 입력 :");

	scanf_s("%d", &birthday, sizeof(birthday)); // 생년월일 입력

	printf("학번 입력 :");

	scanf_s("%d", &schoolnumber, sizeof(schoolnumber)); // 학번 입력

	printf("학과 입력 :");

	scanf_s("%s", school, sizeof(school)); // 학과명 입력

	printf("\n이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s", name, birthday, schoolnumber, school); // 이름, 생년월일, 학번, 학과명 출력

}