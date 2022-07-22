#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (const auto& elt : arr) {
        if (elt % divisor == 0) answer.push_back(elt);
    }
    if (answer.empty()) return vector<int>{ -1 };
    sort(begin(answer), end(answer));
    return answer;
}