#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<pair<int, int>> arr(8);
	for (int i = 0; i < 8; ++i) {
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(begin(arr), end(arr));
	
	int sum = 0;
	vector<int> problem(5);
	for (int i = 3; i < 8; ++i) {
		sum += arr[i].first;
		problem[i - 3] = arr[i].second;
	}
	cout << sum << '\n';

	sort(begin(problem), end(problem));
	for (const auto& elt : problem) cout << elt << ' ';

	return 0;
}