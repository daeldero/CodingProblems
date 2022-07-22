#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = s;
    sort(begin(answer), end(answer), greater<char>());
    return answer;
}