#include <stack>
#include <vector>

using namespace std;

stack<int> s;

vector<int> solution(vector<int> bank){
    vector<int> answer;

    for(int i=0; i<bank.size(); i++){
        if(bank[i]>0){
            s.push(bank[i]);
            continue;
        } 

        while(!s.empty()){
            int tmp = s.top();
            s.pop();

            int value = tmp-bank[i];
            if(value > 0){
                bank[i] -= tmp;
            }else{
                s.push(value);
            }
        }
    }

    while(!s.empty()){
        int tmp = s.top();
        s.pop();
        answer.push_back(tmp);
    }

    return answer;
}
