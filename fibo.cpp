#include <stdio.h>

int main() {
	int n = 0;
	int arr[44] = { 2, 3, 0, };

	scanf("%d", &n);

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	printf("%d", arr[n-1]);

	return 0;
}