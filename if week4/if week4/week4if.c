#include <stdio.h>
#include <string.h>
main(void) {
	for (int i = 0; i < 101; i++) {
		if (i % 3 == 0 && i % 4 == 0) {
			printf("%d\n", i);
		}
		else if (i % 7 == 0) {
			printf("%d\n", i);
		}
	}
}