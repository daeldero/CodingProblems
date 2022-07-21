#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) return vector<int>{ -1 };
    
    vector<int> answer;
    int m = *min_element(begin(arr), end(arr));
    for (const auto& elt : arr) {
        if (elt != m) answer.push_back(elt);
    }
    return answer;
}