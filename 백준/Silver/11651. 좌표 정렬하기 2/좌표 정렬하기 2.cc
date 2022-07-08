#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using pr = pair<int, int>;

bool compare(const pr& p1, const pr& p2) {
	if (p1.second == p2.second) return p1.first < p2.first;
	return p1.second < p2.second;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> arr(n);
	for (auto& elt : arr) cin >> elt.first >> elt.second;
	sort(begin(arr), end(arr), compare);

	for (const auto& elt : arr) cout << elt.first << ' ' << elt.second << '\n';

	return 0;
}