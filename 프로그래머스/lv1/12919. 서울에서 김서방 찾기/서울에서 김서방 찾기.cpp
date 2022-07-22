#include <string>
#include <vector>
#include <sstream>
// #include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    int x;
    for (x = 0; x < seoul.size(); ++x) {
        if (seoul[x] == "Kim") break;
    }
    stringstream ss;
    ss << "김서방은 " << x << "에 있다";
    return static_cast<string>(ss.str());
}

/*
string solution(vector<string> seoul) {
    string answer = "";
    int position = find(begin(seoul), end(seoul), "Kim") - begin(seoul);
    answer += "김서방은 " + to_string(position) + "에 있다";
    return answer;
}
*/
