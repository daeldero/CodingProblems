#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;

	ll div = 1'000'000'007;

	ll prev = 1;
	ll now = 1;
	ll next = 1;
	for (ll i = 3; i <= n; ++i) {
		next = (now + prev) % div;
		prev = now;
		now = next;
	}
	cout << next << ' ' << n - 2;

	return 0;
}