#include <iostream>
#include <set>
using namespace std;

int main() {
	int n = 0;
	set<int> s;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x = 0; 
		scanf("%d", &x);
		s.insert(x);
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 0;
		scanf("%d", &x);
		printf("%d ", s.count(x));
	}

	return 0;
}