#include <string>
#include <vector>

using namespace std;

vector<int> month_days{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
vector<string> days{ "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

string solution(int a, int b) {
    int dist = 5;
    for (int i = 1; i < a; ++i) {
        dist += month_days[i];
    }
    dist += (b - 1);
    return days[dist % 7];
}