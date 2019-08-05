#include <stdio.h>

int main() {
	int n = 0;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &n);

			if (j/3==0) {
				sum1 += n;
			}
			else if (j/3==1) {
				sum2 += n;
			}
			else if (j/3==2) {
				sum3 += n;
			}
		}
		if (i % 3 == 2) {
			printf("%d\n", sum1);
			printf("%d\n", sum2);
			printf("%d\n", sum3);
			sum1 = 0;
			sum2 = 0;
			sum3 = 0;
		}
	}
	return 0;
}