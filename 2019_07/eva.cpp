#include <stdio.h>

int main() {
	int arr[5] = { 0, };
	int a = 0, b = 0;

	for (int i = 0; i < 4; i++)
		scanf("%d", &arr[i]);

	a = arr[1] - arr[0];
	b = arr[1]/arr[0];

	if (a == arr[3] - arr[2])
		arr[4] = a + arr[3];
	else if (b == arr[3] / arr[2])
		arr[4] = arr[3] * b;

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}