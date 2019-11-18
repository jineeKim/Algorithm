#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> solution(long long k, vector<long long> room_number) {
	vector<long long> check(room_number.size(), 0);
	vector<long long> answer;

	for (int i = 0; i < check.size(); i++) {
		check[i] = i + 1;
	}

	for (int x : room_number) {
		if (check[x-1] > 0) {
			answer.push_back(x);
			check[x-1] = 0;

		}
		else {
			vector<long long> tmp(check.size());
			tmp = check;
			sort(tmp.begin(), tmp.end());
			for (int i : tmp) {
				if (i != 0) {
					answer.push_back(i);
					check[tmp[i]] = 0;
				}

			}

		}
	}
	return answer;
}

int main() {
	long long k = 10;
	vector<long long> room_number = { 1,3,4,1,3,1 };
	solution(k, room_number);
	return 0;
}