#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> arr(n + 1, 0);
	arr[1] = 1;
	for (int i = 2; i <= n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 1000000007;
	}
	cout << arr.back();

	return 0;
}