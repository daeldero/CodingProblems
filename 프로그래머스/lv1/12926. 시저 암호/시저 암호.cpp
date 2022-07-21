#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) {
            int c = (s[i] - 'a' + n) % 26;
            answer += static_cast<char>(c + 'a');
        }
        else if (isupper(s[i])) {
            int c = (s[i] - 'A' + n) % 26;
            answer += static_cast<char>(c + 'A');
        }
        else answer += ' ';
    }
    return answer;
}