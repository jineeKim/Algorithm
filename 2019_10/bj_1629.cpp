#include <stdio.h>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int ans = 1;
	for (int i = 0; i < b; i++) {
		ans *= a;
		ans %= c;
	}

	printf("%d", ans%c);

	return 0;
}