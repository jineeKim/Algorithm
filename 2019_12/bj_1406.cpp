#include <string>
#include <stack>
#include <stdio.h>
#include <string.h>

using namespace std;
char a[600000];

int main() {
	stack <char> left;
	stack <char> right;
	int num = 0;

	scanf("%s", a);
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		left.push(a[i]);
	}
	scanf("%d", &num);
	while (num--) {
		char s;
		scanf(" %c", &s);
		if (s == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (s == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (s == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (s == 'P') {
			char w = 0;
			scanf(" %c", &w);
			left.push(w);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}
	
	printf("\n");
	return 0;
}