#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(9);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	int total = 0;
	for (const auto& elt : arr) total += elt;

	pair<int, int> idx;
	for (int i = 0; i < 9; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (total - arr[i] - arr[j] == 100) idx = { i, j };
		}
	}

	for (int i = 0; i < 9; ++i) {
		if (i != idx.first && i != idx.second) cout << arr[i] << '\n';
	}

	return 0;
}