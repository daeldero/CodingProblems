#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int x, y;
		cin >> x >> y;
		int d = y - x;

		int sn = static_cast<int>(sqrt(d));
		if (d == sn * sn) cout << 2 * sn - 1 << '\n';
		else {
			if (d - sn * sn > sn) cout << 2 * sn + 1 << '\n';
			else cout << 2 * sn << '\n';
		}
	}

	return 0;
}