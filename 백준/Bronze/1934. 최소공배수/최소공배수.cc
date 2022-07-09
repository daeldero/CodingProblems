#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << '\n';
	}

	return 0;
}