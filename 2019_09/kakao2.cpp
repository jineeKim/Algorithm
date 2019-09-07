#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> words, vector<string> queries) {
	vector<int> answer(queries.size(), 0);
	int j = 0;
	for (int k = 0; k < queries.size(); k++) {
		for (int i = 0; i < words.size(); i++) {
			if (words[i].size() == queries[k].size()) {
				for (j = 0; j < queries[k].size(); j++) {
					if (words[i].at(j) != queries[k].at(j) || queries[k].at(j) != '?') {
						continue;
					}
					else
						break;
				}
				if (j == queries[k].size()) {
					answer[k] += 1;
				}

			}
		}
	}
	return answer;
}

int main() {
	vector<string> w;
	vector<string> q;

	w.push_back("frodo");
	w.push_back("front");
	w.push_back("frost");
	w.push_back("frozen");
	w.push_back("frame");
	w.push_back("kakao");

	q.push_back("fro??");
	q.push_back("????o");
	q.push_back("fr???");
	q.push_back("fro???");
	q.push_back("pro?");

	printf("%d\n", solution(w, q));

	return 0;
}