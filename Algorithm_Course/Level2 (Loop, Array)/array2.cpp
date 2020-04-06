#include <stdio.h>

int n, m, a, b;
int arr[110][110];

int main(){
  scanf("%d %d", &n, &m);
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  
  scanf("%d %d", &a, &b);
  printf("%d", arr[a][b]);
    
  return 0;
}