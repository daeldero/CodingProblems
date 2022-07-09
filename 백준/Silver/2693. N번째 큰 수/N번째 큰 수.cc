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
		vector<int> arr(10);;
		for (auto& elt : arr) cin >> elt;
		sort(begin(arr), end(arr));
		cout << arr[7] << '\n';
	}

	return 0;
}