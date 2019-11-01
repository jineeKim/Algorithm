#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int>arr (n, 1);

	for (int i = 0; i < lost.size(); i++) {
		arr[lost[i]-1] = 0;
	}

	for (int i = 0; i < reserve.size();) {
		if (arr[reserve[i] - 1] == 0) {
			arr[reserve[i] - 1] = 1;
			reserve.erase(reserve.begin()+i);
		}
		else {
			i++;
		}
	}
	
	for (int i = 0; i < reserve.size(); i++) {
		if (reserve[i] - 2 >= 0 && arr[reserve[i] - 2] == 0)
			arr[reserve[i] - 2] = 1;
		else if (reserve[i] < arr.size() && arr[reserve[i]] == 0)
			arr[reserve[i]] = 1;
	}

	for (int x : arr) {
		if (x == 1)
			answer++;
	}
	return answer;
}

int main() {
	int n=3;
	vector<int> lost = {1};
	vector<int> reserve = {2};
	solution(n, lost, reserve);

	return 0;
}