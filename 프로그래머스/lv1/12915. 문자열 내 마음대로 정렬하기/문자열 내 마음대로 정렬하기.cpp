#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Compare {
    int n;
    const bool operator()(const string& s1, const string& s2) const {
        if (s1[n] == s2[n]) return s1 < s2;
        return s1[n] < s2[n];
    }
};

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    auto compare = Compare{ n };
    sort(begin(answer), end(answer), compare);
    return answer;
}