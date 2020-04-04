#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair<int, int> > v;

int main(){
  for(int i=0; i<9; i++){
    int tmp=0;
    scanf("%d", &tmp);
    v.push_back(make_pair(tmp, i));
  }  
  
  sort(v.begin(), v.end());
  
  printf("%d\n%d", v[1].first, v[1].second+1);
  
  return 0;
}