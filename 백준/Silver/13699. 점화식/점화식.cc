#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void t(vector<ll>& arr, int n) {
	for (int i = 0; i < n; ++i) {
		arr[n] += arr[i] * arr[n - 1 - i];
	}
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> arr(n + 1, 0);
	arr[0] = 1;
	for (int i = 1; i <= n; ++i) {
		t(arr, i);
	}
	cout << arr.back();

	return 0;
}