#include <stdio.h>

int main() {
	int n[20] = { 0, };
	int max = 0, sum[2] = { 0, };

	for (int i = 0; i < 20; i++) {
		scanf("%d", &n[i]);
	}
	max = n[0];
	for (int i = 0; i < 20; i++) {
		for (int j = i + 1; j < 20; j++) {
			if (n[i] + n[j] > max) {
				max = n[i] + n[j];
				sum[0] = n[i];
				sum[1] = n[j];
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", sum[0], sum[1]);
	return 0;
}