#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	cout << arr[k - 1];

	return 0;
}