#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Power(int base, int exponent) {
	if (exponent == 1) return base;
	if (exponent == 0) return 1;

	if (exponent % 2 != 0) return base * Power(base, exponent - 1);
	else {
		int root = Power(base, exponent / 2);
		return root * root;
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		int b, n;
		cin >> b >> n;
		if (b == 0 && n == 0) break;

		int a = 1;
		while (Power(a, n) < b) ++a;

		if (Power(a, n) - b > b - Power(a - 1, n)) cout << a - 1 << '\n';
		else cout << a << '\n';
	}


	return 0;
}