#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		vector<int> arr(5);
		for (auto& elt : arr) cin >> elt;
		sort(begin(arr), end(arr));

		if (arr[3] - arr[1] >= 4) cout << "KIN\n";
		else cout << arr[1] + arr[2] + arr[3] << '\n';
	}

	return 0;
}