#include <iostream>
using namespace std;
using ll = long long;

ll multiply(ll a, ll b, ll c) {
	if (b == 1) return a % c;
	if (b % 2 == 1) return (a * multiply(a, b - 1, c)) % c;
	ll temp = multiply(a, b / 2, c) % c;
	return (temp * temp) % c;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll a, b, c;
	cin >> a >> b >> c;
	cout << multiply(a, b, c);

	return 0;
}