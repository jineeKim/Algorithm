#include <iostream>
#include <vector>

using namespace std;


int main(void) {
	std::ios::sync_with_stdio(false);
	int n = 0, m = 0;
	int x = 0, y = 0;

	cin >> n >> m;
	cin >> x >> y;

	if (n < 1 || m < 1 || n < x || m < y) {
		cout << "fail" << endl;
		return 0;
	}

	long long arr[25][25] = { 0, };

	for (int i = 1; i <= y; i++)
		arr[i][0] = 1;

	for (int i = 1; i <= x; i++)
		arr[0][i] = 1;
	
	for (int i = 1; i <= y; i++) {
		for (int j = 1; j <= x; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j-1];
		}
	}


	cout << y + x << endl;
	cout << arr[y][x] << endl;

	return 0;
}