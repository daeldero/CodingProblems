#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll CountMakedLines(const vector<ll>& arr, ll length) {
	ll n_maked = 0;
	for (const auto& l : arr) {
		n_maked += l / length;
	}
	return n_maked;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int k, n;
	cin >> k >> n;

	vector<ll> lines(k);
	for (auto& l : lines) cin >> l;
	ll ubd = *max_element(begin(lines), end(lines));
	ll lbd = 1;

	ll length = (ubd + lbd) / 2;
	while (lbd < length) {
		ll n_maked = CountMakedLines(lines, length);
		if (n_maked < n) {
			ubd = length;
			length = (lbd + length) / 2;
		}
		else {
			lbd = length;
			length = (ubd + length) / 2;
		}
	}
	if (CountMakedLines(lines, length + 1) == n) ++length;
	cout << length;

	return 0;
}