#include <iostream>
#include <vector>
using namespace std;

int abs(int x) {
	return (x > 0) ? x : -x;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(10);
	for (auto& elt : arr) cin >> elt;

	for (int i = 1; i < 10; ++i) arr[i] += arr[i - 1];

	int idx = 0;
	for (int i = 0; i < 10; ++i) {
		if (abs(100 - arr[i]) <= abs(100 - arr[idx])) idx = i;
	}
	cout << arr[idx];

	return 0;
}