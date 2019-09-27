#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> q;
	int n = 0;
	cin >> n;

	while (n--) {
		int input = 0;
		cin >> input;
		if (input != 0) {
			q.push(-input);
		}
		else {
			if (!q.empty()) {
				cout << -q.top() << '\n';
				q.pop();
			}
			else
				cout << "0\n";
		}
	}

	return 0;
}