#include <stdio.h>
main(void) {
	int score = 75;

	if (score > 80) {
		printf("당신의 점수는 %d점 입니다.\n", score);
		printf("당신의 학점은 A+입니다.\n");
	}
	else if (score > 70) {
		printf("당신의 학점은 A입니다.");
	}
	else if (score > 60) {
		printf("당신의 학점은 B+입니다.");
	}
}