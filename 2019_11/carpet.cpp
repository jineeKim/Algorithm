#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int red) {
	vector<int> answer;
	vector<int> arr;
	int sum = brown + red;
	int i = 0;

	for (i = 1; i*i < sum; i++) {
		if (sum%i == 0) {
			int tmp = sum / i;

			if ((tmp - 2)*(i - 2) == red) {
				answer.push_back(tmp);
				answer.push_back(i);
				return answer;
			}
		}
	}
}

int main() {
	int a = 8, b = 1;
	solution(a, b);

	return 0;
}