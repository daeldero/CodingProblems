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
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr), greater<int>());

	int weight = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] * (i + 1) > weight) weight = arr[i] * (i + 1);
	}
	cout << weight;

	return 0;
}