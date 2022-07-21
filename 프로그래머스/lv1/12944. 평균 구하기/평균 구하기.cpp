#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (const auto& elt : arr) answer += elt;
    answer /= static_cast<double>(arr.size());
    return answer;
}