#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100100][2];
int result[100100];
int n;

int main() {
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j) continue;
			if(arr[j][0]<arr[i][0] && arr[i][0]<arr[j][1]) result[i]++;
		}
	}
		
	for(int i=0; i<n; i++){
		printf("%d\n", result[i]);
	}
	return 0;
}