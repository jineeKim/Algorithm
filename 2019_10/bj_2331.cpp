#include <iostream>
#include <stdio.h>
using namespace std;
int check[1000000];
int pow(int n, int p) {
	int ans = 1;
	for (int i = 0; i < p; i++) {
		ans *= n;
	}
	return ans;
}
int next(int a, int p) {
	int ans = 0;
	while (a > 0) {
		ans += pow(a % 10, p);
		a /= 10;
	}
	return ans;
}
int length(int n, int p, int cnt) {
	if (check[n] != 0) {
		return check[n] - 1;
	}
	check[n] = cnt;
	int b = next(n, p);
	return length(b, p, cnt +1);
}
int main() {
	int a = 0, p = 0;
	scanf("%d %d", &a, &p);
	printf("%d\n", length(a, p, 1));

	return 0;
}