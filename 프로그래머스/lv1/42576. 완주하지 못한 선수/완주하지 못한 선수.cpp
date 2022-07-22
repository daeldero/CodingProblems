#include <string>
#include <vector>
#include <set>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    multiset<string> arr;
    for (const auto& p : participant) arr.insert(p);
    for (const auto& c : completion) {
        auto iter = arr.find(c);
        arr.erase(iter);
    }
    return *begin(arr);
}