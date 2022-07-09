#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int i = 0;
	while (true) {
		int l, p, v;
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) break;

		int n = (v / p) * l;
		if (v % p > l) n += l;
		else n += v % p;
		cout << "Case " << ++i << ": " << n << '\n';
	}

	return 0;
}