#include <stdio.h>

int n;
int cnt;

int stair(int n) {
	if (n == 0)
		cnt++;
	else if (n < 0)
		return 0;
	
	stair(n - 1);
	stair(n - 2);
}

int main() {
	scanf("%d", &n);
	stair(n);
	printf("%d", cnt);

	return 0;
}