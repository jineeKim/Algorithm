//2309 일곱 난쟁이

#include <stdio.h>
#include <vector> 
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(9);
    int sum=0;
    
    for(int i=0; i<9; i++){
        scanf("%d", &v[i]);
        sum+=v[i];
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(sum-v[i]-v[j]==100){
                for(int k=0; k<9; k++){
                    if(k != i && k != j)
                        printf("%d\n", v[k]);
                }
                return 0;
            }
        }
    }
    
    return 0;
}