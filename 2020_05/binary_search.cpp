#include <stdio.h>
#include <algorithm>
using namespace std;

int n, m;
int s, e;
int arr[100010];

void binarySearch(int num){
  s=0; e=n-1;

  while(e-s>=0){
      int mid = (s+e)/2;
      
      if(arr[mid]==num){
          printf("1\n");
          return;
      }else if(arr[mid]<num) s = mid+1;
      else e = mid-1;
  }
  
  printf("0\n");
  return;
}

int main() {
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    sort(arr, arr+n);
    
    scanf("%d", &m);
    
    for(int i=0; i<m; i++){
        int input=0;
        scanf("%d", &input);
        binarySearch(input);
    }
    
    return 0;
}