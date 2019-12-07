#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	map<string, int> m;
	for (vector<string> i : clothes)
		m[i[1]]++; 

	map<string, int>::iterator iter;
	int answer = 1;
	for (iter = m.begin(); iter != m.end(); iter++) {
		answer *= (iter->second + 1);
	}
	return (answer - 1);
}

int main() {
	vector<vector<string>> clothes = { {"yellow_hat", "headgear" }, {"blue_sunglasses", "eyewear"}, { "green_turban", "headgear" } };
	solution(clothes);
	return 0;
}