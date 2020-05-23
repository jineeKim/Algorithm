#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct info{
    string com; int total; int cnt;
};
vector <info> v;

bool cmp(info a, info b){
    if(a.cnt==b.cnt){
        if(a.total==b.total){
            return a.com<b.com;
        }
        return a.total>b.total;
    }
    return a.cnt>b.cnt;
}

vector <string> solution(vector<string> company, vector< vector<int>> scores){
    vector<string> answer;

    for(int i=0; i<company.size(); i++){
        int cnt=0, sum=0;
        for(int j=0; scores[i].size(); j++){
            if(scores[i][j]>=80) cnt++;
            sum+=scores[i][j];
        }

        v.push_back({company[i], sum, cnt});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++) answer.push_back(v[i].com);
}
