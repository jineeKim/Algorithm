#include <stdio.h>

int arr[110][110];
int n;

int main(){
  scanf("%d", &n);
 
  int num=1;
  for(int i=1; i<=n; i++){
    for(int j=i; j>0; j--){
      arr[i][j]=num++;
    }
  }
  
  for(int i=1; i<=n; i++){
    for(int j=i; j<=n;){
      for(int k=1; k<=n-i+1; k++){
        printf("%d ", arr[j][k]);
        j++;
      }
    }
    printf("\n");
  }
  
  return 0;
}