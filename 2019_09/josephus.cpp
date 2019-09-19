#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n = 0, k = 0;
	cin >> n >> k;
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	int i = 1;
	cout << "<";
	while (!q.empty()){
		if (i%k == 0) {
			if(q.size()==1)
				cout << q.front();
			else 
				cout << q.front() << ", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	} 

	cout << ">";

	return 0;
}