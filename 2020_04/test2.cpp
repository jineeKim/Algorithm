#include <stdio.h>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int numDigit[200010];
vector <pair<int, int>> v;

int sumNumber(int num){
  string tmp = to_string(num);
  int result=0;
  for(int i=0; i<tmp.size(); i++){
    result+=tmp[i]-'0';
  }
  return result;
}

int solution(vector<int> &A) {
  
  for(int i=0; i<A.size(); i++){
    numDigit[i]=sumNumber(A[i]);
  }
  
  int maxNum=-1;
  for(int i=0; i<A.size(); i++){
    for(int j=0; j<A.size(); j++){
      if(i==j) continue;
      if(numDigit[i]==numDigit[j]){
        int sum = A[i]+A[j];
        if(sum>maxNum) maxNum=sum;
      }
    }
  }
  
  return maxNum;
}