#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;
	const ll div = 1'000'000;

	const ll period = 1'500'000;
	vector<ll> arr(period, 0);
	arr[1] = 1;
	for (int i = 2; i < period; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= div;
	}

	cout << arr[n % period];

	return 0;
}