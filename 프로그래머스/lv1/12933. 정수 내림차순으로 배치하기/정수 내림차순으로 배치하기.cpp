#include <string>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s;
    while (n != 0) {
        s += static_cast<char>(n % 10 + '0');
        n /= 10;
    }
    sort(begin(s), end(s), greater<long long>());
    answer = stoll(s);
    return answer;
}