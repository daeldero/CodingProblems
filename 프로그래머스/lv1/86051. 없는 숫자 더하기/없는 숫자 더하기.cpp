#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    for (const auto& n : numbers) answer -= n;
    return answer;
}