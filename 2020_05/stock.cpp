#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int n=prices.size();
    answer.resize(n);
    
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=i+1; j<n; j++){
            if(prices[i]>prices[j]){
                if(!flag){
                    answer[i]=j-i;
                    flag = true;
                    break;
                }
            }
        }
        
        if(!flag) answer[i]=n-i-1;
    }
    
    return answer;
}