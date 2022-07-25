#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	int nation;
	int number;
	int score;

	const bool operator<(const Student& other) const {
		return score > other.score;
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<Student> arr(n);
	for (auto& elt : arr) cin >> elt.nation >> elt.number >> elt.score;
	sort(begin(arr), end(arr));

	int cnt = 0;
	vector<int> nations(n, 0);
	for (const auto& elt : arr) {
		if (nations[elt.nation] < 2) {
			cout << elt.nation << ' ' << elt.number << '\n';
			++nations[elt.nation];
			++cnt;
		}
		if (cnt == 3) break;
	}

	return 0;
}