#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;
	vector<int> v;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		int a;
		scanf("%d", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int ans = 2e9;
	int j = 0;
	for (int i = 0; i < n &&j < n;) {
		if (v[i] - v[j] >= m) {
			ans = min(ans, v[i] - v[j]);
			j++;
		}
		else
			i++;
	}

	printf("%d", ans);
	return 0;
}