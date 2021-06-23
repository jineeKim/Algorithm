//O(N^2) N = 100,000
//중복되는 기능 함수로 뺌
//더 나은 알고리즘? -> 

#include <stdio.h>
#include <vector>
using namespace std;

int getWantedNum(vector<int> card, vector<int> wanted){
    int cnt=0;
    for(int i=0; i<card.size(); i++){
        if(card[i]==wanted[i]) cnt++;
    }
    return cnt;
}

int solution(vector<int> card, vector<int> wanted){
    int answer = card.size();

    if(getWantedNum(card, wanted)==answer) return 0;

    for(int i=0; i<wanted.size(); i++){
        for(int j=0; j<card.size(); j++){
            if(i==j) continue;
            if(wanted[i]==card[j]){
                int tmp=card[j];
                card[j]=card[i];
                card[i]=tmp;
            }

        }
    }

    return answer-getWantedNum(card, wanted);
}