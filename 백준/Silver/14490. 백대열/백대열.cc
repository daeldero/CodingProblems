#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	char c;
	cin >> n >> c >> m;

	int g = gcd(n, m);
	cout << n / g << c << m / g;

	return 0;
}