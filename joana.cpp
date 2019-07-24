#include <stdio.h>

int main() {
	long long line = 0;
	long long n = 0, num = 0, result = 0;

	scanf("%lld", &line);

	n = (line + 1) / 2 * (line + 1) / 2;
	num = 2 * n - 1;

	for (int i = 0; i < 3; i++) {
		result += num - 2*i;
	}

	printf("%lld", result);
	return 0;
}