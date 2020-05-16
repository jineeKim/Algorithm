#include <string>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

int num[15][2];
int L[3];
int R[3];
string  answer = "";

void setting(){
  num[0][0]=2; num[0][1]=4;
  num[10][0]=1; num[10][1]=4;
  num[11][0]=3; num[11][1]=4;
  
  for(int k=1, i=0; k<10;){
    if(k%3==1) i++;
    
    for(int j=1; j<4; j++, k++){
      num[k][0]=j;
      num[k][1]=i;
    }
  }
  L[0]=10; L[1]=1; L[2]=4;
  R[0]=11; R[1]=3; R[2]=4;
}

int getDistance(int x1, int x2, int y1, int y2){
  int distance = abs(x1-x2)+abs(y1-y2);
  return distance;
}

void left(int idx){
  answer+="L";
  L[0]=idx; L[1]=num[L[0]][0]; L[2]=num[L[0]][1];
}

void right(int idx){
  answer+="R";
  R[0]=idx; R[1]=num[R[0]][0]; R[2]=num[R[0]][1];
}

string solution(vector<int> numbers, string hand) {
  setting();
  answer = "";
  
  for(int i=0; i<numbers.size(); i++){
    if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7){
      left(numbers[i]);
      continue;
    }
    else if(numbers[i]==3 || numbers[i]==6 || numbers[i]==9){
      right(numbers[i]);
      continue;
    }
    else{
      // printf("%d %d %d %d %d %d\n", L[1], L[2], R[1], R[2],  num[numbers[i]][0],  num[numbers[i]][1]);
      
      int Ld = getDistance(L[1], num[numbers[i]][0], L[2], num[numbers[i]][1]);
      int Rd = getDistance(R[1], num[numbers[i]][0], R[2], num[numbers[i]][1]);
      // printf("%d %d %d\n", numbers[i], Ld, Rd);
      if(Ld<Rd){
        left(numbers[i]);
      }else if(Ld>Rd){
        right(numbers[i]);
      }else{
        if(hand=="left"){
          left(numbers[i]);
        }else right(numbers[i]);
      }
    }
  }
  return answer;
}

int main(){
  vector<int> numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
  string hand="right";
  printf("%s", solution(numbers, hand).c_str());
  return 0;
}