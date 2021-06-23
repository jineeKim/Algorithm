#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getEqualValuesNumber(vector<int> A, vector<int> B){
    int cnt=0;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<B.size(); j++){
            if(A[i]==B[j]) cnt++;
        }
    }
    return cnt;
}

vector<int> solution(vector<int> arrA, vector<int> arrB){
    vector<int> answer;

    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end());

    arrA.erase(unique(arrA.begin(), arrA.end()), arrA.end());
    arrB.erase(unique(arrB.begin(), arrB.end()), arrB.end());
    
    int same = getEqualValuesNumber(arrA, arrB);
    answer.push_back(arrA.size());
    answer.push_back(arrB.size());
    answer.push_back(arrA.size()+arrB.size() - same);
    answer.push_back(arrA.size()-same);
    answer.push_back(same);

    return answer;
}
