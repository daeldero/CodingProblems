#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				int temp = arr[i] + arr[j] + arr[k];
				if (temp <= m && m - temp < m - sum) sum = temp;
			}
		}
	}
	cout << sum;

	return 0;
}