#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b && a == c && a == 0) break;

		int m = max(a, max(b, c));
		if (a * a + b * b + c * c == m * m * 2) cout << "right\n";
		else cout << "wrong\n";
	}

	return 0;
}