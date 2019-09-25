#include <iostream>
using namespace std;

pair<int, int> input[51];
int Rank[50];

void compareRank(const int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (input[i].first > input[j].first && input[i].second > input[j].second)
				Rank[j]++;
		}
	}
}

void printRank(const int N) {
	for (int i = 0; i < N; i++) {
		cout << Rank[i] + 1 << " ";
	}
}

int main() {
	int n = 0;
	int cm[51] = { 0, };
	int kg[51] = { 0, };

	int arr[51][51] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input[i].first >> input[i].second;
	}

	compareRank(n);
	printRank(n);
	return 0;
}