#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<string> day{ "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	vector<int> month{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int x, y;
	cin >> x >> y;

	int dist = y - 1;
	for (int i = 1; i < x; ++i) {
		dist += month[i];
	}
	cout << day[dist % 7];

	return 0;
}