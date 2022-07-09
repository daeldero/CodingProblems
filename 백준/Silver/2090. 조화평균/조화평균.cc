#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int gcd(ll a, ll b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> arr(n);
	for (auto& elt : arr) cin >> elt;

	ll den = 1;
	ll num = 0;
	for (int i = 0; i < n; ++i) {
		num = num * arr[i] + den;
		den *= arr[i];
		ll g = gcd(num, den);
		num /= g;
		den /= g;
	}
	cout << den << '/' << num;

	return 0;
}