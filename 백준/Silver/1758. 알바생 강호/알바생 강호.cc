#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> tips(n);
	for (auto& tip : tips) cin >> tip;
	sort(begin(tips), end(tips), greater<ll>());

	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		if (tips[i] - i < 0) break;
		sum += (tips[i] - i);
	}
	cout << sum;

	return 0;
}