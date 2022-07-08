#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using pr = pair<int, string>;

bool compare(const pr& p1, const pr& p2) {
	return p1.first < p2.first;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pr> arr(n);
	for (auto& elt : arr) cin >> elt.first >> elt.second;
	stable_sort(begin(arr), end(arr), compare);
	
	for (const auto& elt : arr) cout << elt.first << ' ' << elt.second << '\n';

	return 0;
}