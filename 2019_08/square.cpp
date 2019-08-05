#include <stdio.h>

int main() {
	int a = 0, b = 0;
	int min = 0, sum = 0;

	scanf("%d %d", &a, &b);
	min = b;
	for (int i = a; i <= b; i++) {
		for (int j = 2; j < i; j++) {
			if (i / j == j && i % j == 0) {
				if(min > i)
					min = i;
				sum += i;
			}
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}