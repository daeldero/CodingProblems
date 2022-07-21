#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int n = phone_number.size();
    string answer = "";
    for (int i = 0; i < n - 4; ++i) answer += '*';
    for (int i = n - 4; i < n; ++i) answer += phone_number[i];
    return answer;
}