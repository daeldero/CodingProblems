#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll CountAmount(const vector<ll>& trees, ll height) {
	ll amount = 0;
	for (const auto& h : trees) {
		amount += (h - height > 0 ? h - height : 0);
	}
	return amount;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<ll> trees(n);
	for (auto& h : trees) cin >> h;
	ll ubd = *max_element(begin(trees), end(trees));
	ll lbd = 0;

	ll mid = (ubd + lbd) / 2;
	while (lbd < mid) {
		ll amount = CountAmount(trees, mid);
		if (amount >= m) {
			lbd = mid;
			mid = (lbd + ubd) / 2;
		}
		else {
			ubd = mid;
			mid = (lbd + ubd) / 2;
		}
	}
	if (CountAmount(trees, mid + 1) == m) ++mid;
	cout << mid;

	return 0;
}