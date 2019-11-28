#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0, j = 0, i = 0, max = 0;
	priority_queue<int> pQueue;
	queue<pair<int, int> > q;

	for (int i = 0; i < priorities.size(); i++) {
		q.push(make_pair(i, priorities[i]));
		pQueue.push(priorities[i]);
	}
	
	while(!q.empty()) {
		if (pQueue.top() == q.front().second) {
			if (q.front().first == location) {
				return answer + 1;
			}
			else {
				answer++;
				q.pop();
				pQueue.pop();
			}
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	return answer;
}

int main() {
	vector<int> priorities = { 3,3,4,2 };
	int location = 3;

	solution(priorities, location);

	return 0;
}