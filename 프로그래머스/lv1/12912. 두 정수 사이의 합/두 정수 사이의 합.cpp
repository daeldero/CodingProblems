#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long m = min(a, b);
    long long M = max(a, b);
    
    for (long long i = m; i <= M; ++i) answer += i;
    return answer;
}