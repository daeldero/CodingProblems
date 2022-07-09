#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<int> arr;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) arr.push_back(i);
	}

	if (arr.size() < k) cout << 0;
	else cout << arr[k - 1];

	return 0;
}