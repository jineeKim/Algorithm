#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(string s1, string s2){
    return s1.size() > s2.size();
}

bool solution(vector<string> name_list){
    sort(name_list.begin(), name_list.end(), cmp);

    for(int i=0; i<name_list.size(); i++){
        for(int j=i+1; j<name_list.size(); j++){
            size_t pos;
            pos = name_list[i].find(name_list[j]);

            if(pos!=string::npos) return true;
        }
    }

    return false;
}
