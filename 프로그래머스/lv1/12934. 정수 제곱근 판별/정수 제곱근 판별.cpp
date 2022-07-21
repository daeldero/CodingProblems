#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long s = static_cast<long long>(sqrt(n));
    long long answer = (s * s == n) ? (s + 1) * (s + 1) : -1;
    return answer;
}