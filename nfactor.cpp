#include <stdio.h>

int main() {
	int a = 0, count = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			count++;
	}

	printf("%d", count);

	return 0;
}