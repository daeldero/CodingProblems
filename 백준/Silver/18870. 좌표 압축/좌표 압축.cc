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
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(begin(arr), end(arr));

	int cnt = 0;
	vector<int> result(n, 0);
	result[arr[0].second] = 0;
	for (int i = 1; i < n; ++i) {
		if (arr[i].first != arr[i - 1].first) ++cnt;
		result[arr[i].second] = cnt;
	}
	
	for (const auto& elt : result) cout << elt << ' ';
}