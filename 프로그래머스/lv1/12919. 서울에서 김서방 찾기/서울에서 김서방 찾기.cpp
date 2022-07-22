#include <string>
#include <vector>
#include <sstream>
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