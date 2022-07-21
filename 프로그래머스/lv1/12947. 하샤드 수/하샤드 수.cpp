#include <string>
#include <vector>

using namespace std;

int DigitSum(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

bool solution(int x) {
    return x % DigitSum(x) == 0;
}