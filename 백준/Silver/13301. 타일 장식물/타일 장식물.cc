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

	if (n == 1) {
		cout << 4;
	}
	else {
		vector<ll> arr(n);
		arr[0] = 4;
		arr[1] = 6;
		for (int i = 2; i < n; ++i) arr[i] = arr[i - 1] + arr[i - 2];
		cout << arr.back();
	}

	return 0;
}