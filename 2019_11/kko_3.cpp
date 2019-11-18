#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> stones, int k) {
	int answer = 1;
	vector<pair<int, int>> v;

	for (int i = 0; i < stones.size(); i++) {
		v.push_back(make_pair(i+1, stones[i]));
	}

	while (1) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].second > 0) {
				v[i].second--;
				if (v[i].second == 0) {
					v[i].first = 0;
				}
			}
		}
		answer++;
		for (int i = v.size()-1; i >1; i--) {
			sort(v.begin(), v.end());
			if (v[i].first == 0) {
				continue;
			}
			else if (v[i].first - v[i - 1].first >= k) {
				return answer;
			}
			
		}
		
	}
}

int main() {
	vector<int> stones = { 2, 4, 5, 3, 2, 1, 4, 2, 5, 1 };
	int k = 3;
	solution(stones, k);


	return 0;
}