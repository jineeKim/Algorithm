#include <stdio.h>

int n, result, max;

int main() {
  scanf("%d", &n);
  
  for(int i=0; i<n; i++){
    int a=0, b=0, c=0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==b&&b==c) result = 10000+a*1000;
    else if(a==b||a==c)  result = 1000+a*100;
    else if(b==a||b==c)  result = 1000+b*100;
    else if(c==a||c==b)  result = 1000+c*100;
    else{
      if(a>b&&a>c) result = a*100;
      else if(b>a&&b>c) result = b*100;
      else if(c>a&&c>b) result = c*100;
    }
    if(max<=result) max=result;
  }
  printf("%d", max);
  return 0;
}
