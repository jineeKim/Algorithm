#include <stdio.h>
#include <vector>
using namespace std;


int solution(vector<int> A, int N) {
	vector<int> arr(2000003);

	for (int i = 1; i <= 1000001; i++) {
		arr[i] = i;
	}

	for (int i = 0; i<N; i++) {
		if (A[i] > 0)
			arr[A[i]] = 0;
	}

	for (int i = 1; i <= 1000001; i++) {
		if (arr[i] != 0)
			return arr[i];
	}

}

int main() {
	vector<int> input (2);

	input[0] = -1000000;
	input[1] = 1000000;

	printf("%d", solution(input, 2));

	return 0;
}