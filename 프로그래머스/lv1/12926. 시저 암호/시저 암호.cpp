#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') answer += ' ';
        else {
            int base = islower(s[i]) ? 'a' : 'A';
            answer += static_cast<char>(base + (s[i] - base + n) % 26);
        }
    }
    return answer;
}
