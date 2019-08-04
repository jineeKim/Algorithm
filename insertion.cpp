#include <stdio.h>

int main() {
	int n = 0, s = 0;
	int arr[1000] = { 0, };

	scanf("%d %d", &n, &s);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 1; j < s; j++) {
		for (int i = 0; i < j; i++) {
			if (arr[i] > arr[j]) {
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}