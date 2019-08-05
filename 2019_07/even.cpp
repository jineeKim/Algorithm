#include <stdio.h>

int main() {
	int n1 = 0, n2 = 0;
	int cnt = 0;
	scanf("%d %d", &n1, &n2);

	for (int i = 1; i * i <= n2; i++) {
		if (i * i >= n1 && i * i <= n2) {
			cnt++;
		}
	}
	printf("%d", n2 - n1 - cnt + 1);
	return 0;
}
