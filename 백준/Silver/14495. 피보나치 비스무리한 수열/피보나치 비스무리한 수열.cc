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

	vector<ll> arr(n + 1, 1);
	for (int i = 4; i <= n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 3];
	}
	cout << arr.back();

	return 0;
}