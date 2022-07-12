#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int n;
		cin >> n;

		vector<int> arr(n);
		for (auto& elt : arr) cin >> elt;
		sort(begin(arr), end(arr));

		int maxNbd = 0;
		for (int j = 0; j < n - 1; ++j) {
			if (arr[j + 1] - arr[j] > maxNbd) maxNbd = arr[j + 1] - arr[j];
		}
		cout << "Class " << i + 1 << '\n' << "Max " << arr.back() << ", Min " << arr.front() << ", Largest gap " << maxNbd << '\n';
	}

	return 0;
}