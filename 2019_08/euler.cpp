#include <stdio.h>

int table[102][102];
int arr[102];
int from, to;
int n, e;
int count;

void recursive(int param) {
	int i;
	for (i = n; i>=1; i--) {
		if (table[param][i] == 1) {
			table[param][i] = 0;
			table[i][param] = 0;
			recursive(i);
		}

	}
	printf("%d ", param);

}

int main() {
	int odd = 0, even = 0;

	scanf("%d %d", &n, &e);

	while (scanf("%d %d", &from, &to) != -1) {
		table[from][to] = 1;
		table[to][from] = 1;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (table[i][j] == 1) {
				arr[i] += 1;
			}
		}
		if (arr[i] %= 2) {
			odd++;
			
		}
		else
			even++;
		
		if (odd == 2 && arr[0] == 0)
			arr[0] = i;
	}

	if (odd == 2) {
		//printf("%d ", arr[0]);
		recursive(arr[0]);
	}
	else if (even == n) {
		//printf("%d ", 1);
		recursive(1);
	}
	else
		printf("0");	

	return 0;
}