#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    int n = numbers.size();
    set<int> arr;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            arr.insert(numbers[i] + numbers[j]);
        }
    }
    
    vector<int> answer;
    for (auto i = begin(arr); i != end(arr); ++i) {
        answer.push_back(*i);
    }
    return answer;
}
