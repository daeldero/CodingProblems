#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, s, p;
	cin >> n >> s >> p;

	if (n == 0) {
		cout << 1;
		return 0;
	}

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	arr.push_back(s);
	sort(begin(arr), end(arr), greater<int>());

	int idx;
	for (int i = 0; i <= n; ++i) {
		if (s == arr[i]) {
			idx = i;
			break;
		}
	}

	int cnt = 0;
	for (int i = idx; i <= n; ++i) {
		if (s == arr[i]) ++cnt;
	}
	if (idx + cnt > p) cout << -1;
	else cout << idx + 1;

	return 0;
}