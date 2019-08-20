#include <stdio.h>

int solution(int N) {
	int s = 0, f = 0;
	int max = 0;
	int i = 0;

	for (i = 0; N != 0; i++) {
		if (N % 2) {
			if (max <= i - s && f > 0) {
				max = i - s;
			}
			s = i;
			f++;
		}
		N /= 2;
	}

	if (f == 1)
		return  0;
	else
		return max - 1;
}
int main() {
	int n = 0;

	scanf("%d", &n);
	printf("%d", solution(n));

}