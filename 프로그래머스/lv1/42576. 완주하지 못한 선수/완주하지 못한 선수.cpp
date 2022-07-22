#include <string>
#include <vector>
#include <set>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    multiset<string> arr;
    for (const auto& p : participant) arr.insert(p);
    for (const auto& c : completion) {
        auto iter = arr.find(c);
        arr.erase(iter);
    }
    return *begin(arr);
}

/*
string solution(vector<string> participant, vector<string> completion) {
	char answer[21];
	for (int j = 0; j < 21; ++j) answer[j] = 0;

	int n = participant.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < participant[i].size(); ++i) {
			answer[j] ^= participant[i][j];
		}
	}

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < completion[i].size(); ++j) {
			answer[j] ^= completion[i][j];
		}
	}
	return string(answer);
}
*/
