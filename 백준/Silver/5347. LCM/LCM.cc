#include <iostream>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		ll a, b;
		cin >> a >> b;
		cout << a * b / gcd(a, b) << '\n';
	}


	return 0;
}