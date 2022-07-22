#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int t = 0; t < commands.size(); ++t) {
        vector<int> temp;
        for (int i = commands[t][0] - 1; i <= commands[t][1] - 1; ++i) {
            temp.push_back(array[i]);
        }
        sort(begin(temp), end(temp));
        answer.push_back(temp[commands[t][2] - 1]);
    }
    
    return answer;
}