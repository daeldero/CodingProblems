#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Round(int numer, int denom) {
	int rounded = numer / denom;
	if (numer % denom >= denom / 2 + (denom % 2 == 1)) ++rounded;
	return rounded;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	int trimmed = Round(n * 3, 20);

	int sum = 0;
	for (int i = trimmed; i < n - trimmed; ++i) sum += arr[i];
	cout << Round(sum, n - 2 * trimmed);

	return 0;
}