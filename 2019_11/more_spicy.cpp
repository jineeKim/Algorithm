#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int> > q;

	for (int x : scoville) {
		q.push(x);
	}

	while (!q.empty()) {
		if (q.top() < K && q.size() >= 2) {
			int a = 0, b = 0;
			a = q.top(); q.pop();
			b = q.top(); q.pop();
			q.push(a + b * 2);
			answer++;
		}
		else if (q.size() == 1 && q.top() < K) {
			return -1;
		}
		else
			break;
	}

	return answer;
}

int main() {
	vector<int> scoville = { 1, 2 };
	int K = 3;
	solution(scoville, K);

	return 0;
}