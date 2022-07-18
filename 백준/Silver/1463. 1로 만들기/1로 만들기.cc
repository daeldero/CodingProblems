#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n == 1) {
		cout << 0;
		return 0;
	}
	if (n == 2 || n == 3) {
		cout << 1;
		return 0;
	}

	vector<int> arr(n + 1);
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; ++i) {
		int m = arr[i - 1] + 1;
		if (i % 2 == 0) m = min(m, arr[i / 2] + 1);
		if (i % 3 == 0) m = min(m, arr[i / 3] + 1);
		arr[i] = m;
	}
	cout << arr[n];

	return 0;
}