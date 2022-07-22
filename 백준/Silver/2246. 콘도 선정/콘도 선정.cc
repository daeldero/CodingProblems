#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> arr(n);
	for (auto& elt : arr) cin >> elt.first >> elt.second;

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		bool candidate = true;
		for (int j = 0; j < n; ++j) {
			if (i == j) continue;
			if (arr[i].first > arr[j].first) {
				if (arr[i].second >= arr[j].second) {
					candidate = false;
					break;
				}
			}
			if (arr[i].second > arr[j].second) {
				if (arr[i].first >= arr[j].first) {
					candidate = false;
					break;
				}
			}
		}
		if (candidate) ++cnt;
	}
	cout << cnt;

	return 0;
}