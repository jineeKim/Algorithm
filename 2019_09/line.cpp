#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	int n = 0;
	int input = 0;
	vector<int> a;
	cin >> n;

	while (n--) {
		cin >> input;
		if (input) {
			a.push_back(n);
		}
	}
	
	int max = 0;

	for (int i = 0; i < a.size() - 1; i++) {
		if (max < a[i] - a[i + 1] - 1) {
			max = a[i] - a[i + 1] - 1;
		}
	}

	cout << max - 1 << endl;
	return 0;
}