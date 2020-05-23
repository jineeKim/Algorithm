#include <stdio.h>
#include <vector>

using namespace std;

int arr[1010];

void swap(int a, int b){
    int tmp = arr[a];
    arr[a]=arr[b];
    arr[b]=tmp;
}

int solution(vector< vector<int> > v, int n, int k){
    for(int i=0; i<=n; i++) arr[i]=i;

    for(int i=1; i<=n; i++){
        swap(v[i][0], v[i][1]);
    }

    for(int i=1; i<=n; i++){
        if(arr[i]==k) return i;
    }
}
    
