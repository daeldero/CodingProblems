#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> arr(n);
	for (auto& elt : arr) cin >> elt;

	vector<ll> sums(n - 1);
	sums[n - 2] = arr[n - 1];
	for (int i = n - 3; i >= 0; --i) {
		sums[i] = sums[i + 1] + arr[i + 1];
	}

	ll sum = 0;
	for (int i = 0; i < n - 1; ++i) {
		sum += arr[i] * sums[i];
	}
	cout << sum;

	return 0;
}