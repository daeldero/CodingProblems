#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int L;
	cin >> L;
	vector<int> arr(L);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	int n;
	cin >> n;

	auto lower = begin(arr);
	for (auto i = begin(arr); i != end(arr); ++i) {
		if (n > *i) lower = i;
	}
	auto upper = lower + 1;
	
	int cnt = 0;
	if (n < *lower) {
		for (int l = 1; l <= n; ++l) {
			for (int u = *lower - 1; u >= n; --u) {
				if (l == u) continue;
				++cnt;
			}
		}
	}
	else {
		for (int l = *lower + 1; l <= n; ++l) {
			for (int u = *upper - 1; u >= n; --u) {
				if (l == u) continue;
				++cnt;
			}
		}
	}
	cout << cnt;

	return 0;
}