#include <string>
#include <vector>
#include <cmath>

using namespace std;

double Distance(vector<int> p1, vector<int> p2) {

	double distance;

	distance = sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2));

	return distance;
}

int solution(vector<int> restaurant, vector<vector<int>> riders, int k) {
	int answer = 0;

	for (int i = 0; i < riders.size(); i++) {
		if (k >= Distance(restaurant, riders[i])) {
			answer++;
		}
	}

	return answer;
}



int main() {
	return 0;
}