#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define QUEUESIZE 200001

int q[QUEUESIZE];
int head, tail;

void push(int parm) {
	q[tail] = parm;
	tail++;
}

void pop(int * p) {
	*p = q[head];
	head++;
}

int main() {
	int a = 0, b = 0;
	int arr[200001] = { 0, };
	int p;

	scanf("%d %d", &a, &b);
	
	arr[a] = 1;
	push(a);

	while (head < tail)
	{
		pop(&p);
		if (p == b) break;
		if (p < b && arr[p * 2] == 0)
		{
			arr[p * 2] = arr[p] + 1;
			push(p * 2);
		}
		if (arr[p + 1] == 0)
		{
			arr[p + 1] = arr[p] + 1;
			push(p + 1);
		}
		if (p >= 1 && arr[p - 1] == 0)
		{
			arr[p - 1] = arr[p] + 1;
			push(p - 1);
		}
	}
	printf("%d", arr[b]-1);
	return 0;
}