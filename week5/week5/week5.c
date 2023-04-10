#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
	double x = 0;
	double y = 0;
	time_t t1 = clock(NULL);
	int circle = 0;
	int count = 0;
	int a = 1;
	srand(time(NULL));

	while (count < 1e+9) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if (pow(x, 2) + pow(y, 2) <= 1) {
			circle++;
		}
		if ((count % 10000000) == 0) {
			printf("%d %% 진행..원주율 : % lf\n",a, 4 * (double)circle / (double)count);
			a++;
		}
		

	}
	time_t t2 = clock(NULL);
	long tt = (t2 - t1);
	printf("코드 소요시간 : %lf초\n", (double)tt / 1000);
	printf("%d번째 루프 원주율 계산 결과 %lf\n", count, 4 * (double)circle / (double)count);
}