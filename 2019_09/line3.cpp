#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);

	int arr[10] = { 0, };
	int mes[100] = { 0, };

	int c = 0, m = 0;
	cin >> m >> c;
	
	int i = 0;
	int tmp = m;
	while (tmp--) {
		cin >> mes[i];
		i++;
	}

	int j = 0;
	int min = mes[0];


	for (int i = 0; i < c; i++) {
		arr[i] = mes[j];
		j++;
	}

	for (j ; j < m; j++) {
		for (int i = 0; i < c - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				arr[i] += mes[j];
			}
			else {
				arr[i+1] += mes[j];
			}
		}
	}

	int max = arr[0];
	for (int i = 0; i < c; i++) {
		if(max <= arr[i])
			max = arr[i];
	}

	cout << max << endl;
	
	return 0;
}