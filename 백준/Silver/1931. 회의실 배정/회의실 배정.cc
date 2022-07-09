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
	for (auto& elt : arr) cin >> elt.second >> elt.first;
	sort(begin(arr), end(arr));

	int cnt = 1;
	int nowEnd = arr.front().first;
	for (int i = 1; i < n; ++i) {
		if (arr[i].second >= nowEnd) {
			++cnt;
			nowEnd = arr[i].first;
		}
	}
	cout << cnt;

	return 0;
}