#include <iostream>
#include <vector>
using namespace std;
using vec = vector<pair<int, int>>;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vec arr(n);
	for (auto& elt : arr) cin >> elt.first >> elt.second;

	vector<int> rank(n, 1);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) ++rank[i];
		}
	}

	for (const auto& elt : rank) cout << elt << ' ';

	return 0;
}