#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int n = s.size();
    if (n != 4 && n != 6) return false;
    bool answer = true;
    for (int i = 0; i < n; ++i) {
        if (s[i] < '0' || s[i] > '9') answer = false;
    }
    return answer;
}