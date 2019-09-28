#include <iostream>
#define max(a, b) ((a>b)? (a):(b))

using namespace std;

int a[20][3];
int d[20][3];

int main() {
	int n = 0, num = 0;
	char input = 0;
	cin >> n;

	for (int i = 1; i <= n/2+1; i++) {
		cin >> num;
		cin >> input;

		switch (input)
		{
		case '+':
			a[i][0] = num;
			break;

		case '-':
			a[i][1] = num;
			break;

		case '*':
			a[i][2] = num;
			break;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		a[0][i] = a[1][i];
	}

	for (int i = 1; i <= n/2; i++) {
		d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2])) + a[i-1][0];
		d[i][1] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2])) - a[i-1][1];
		d[i][2] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2])) * a[i-1][2];
	}

	return 0;
}