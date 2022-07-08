#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> arr(n);
	for (auto& elt : arr) cin >> elt.first >> elt.second;
	sort(begin(arr), end(arr));

	for (const auto& elt : arr) cout << elt.first << ' ' << elt.second << '\n';

	return 0;
}