#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;

	vector<int> sums(n, 0);
	sums[0] = arr[0];
	for (int i = 1; i < n; ++i) {
		sums[i] = sums[i - 1] + arr[i];
	}

	for (int t = 0; t < m; ++t) {
		int i, j;
		cin >> i >> j;

		int sum = sums[j - 1];
		if (i != 1) sum -= sums[i - 2];
		cout << sum << '\n';
	}

	return 0;
}