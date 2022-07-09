#include <iostream>
using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll s;
	cin >> s;

	ll n = 1;
	while (s >= (n + 1) * (n + 2) / 2) ++n;
	cout << n;

	return 0;
}