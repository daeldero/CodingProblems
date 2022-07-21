#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b) {
    if (a % b == 0) return b;
    return Gcd(b, a % b);
}

int Lcm(int a, int b) {
    return a / Gcd(a, b) * b;
}

vector<int> solution(int n, int m) {
    vector<int> answer{ Gcd(n, m), Lcm(n, m)} ;
    return answer;
}