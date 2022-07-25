#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;

	int max_sum = -10000;
	for (int i = 0; i <= n - k; ++i) {
		int sum = 0;
		for (int j = 0; j < k; ++j) {
			sum += arr[i + j];
		}
		if (sum > max_sum) max_sum = sum;
	}
	cout << max_sum;

	return 0;
}