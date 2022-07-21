#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer{ arr.front() };
    int now = arr.front();
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] != now) {
            answer.push_back(arr[i]);
            now = arr[i];
        }
    }
    return answer;
}

/*
vector<int> solution(vector<int> arr)
{
    arr.erase(unique(begin(arr), end(arr)), end(arr));
    vector<int> answer = arr;
    return answer;
}
*/
