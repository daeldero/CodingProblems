#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto& c : arr) cin >> c;
	sort(begin(arr), end(arr), greater<int>());

	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		if (i % 3 != 0) sum += arr[i - 1];
	}
	cout << sum;

	return 0;
}