#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;

	int n = 0;
	int l = 64;
	while (x != 0) {
		if (x >= l) {
			x -= l;
			++n;
		}
		l /= 2;
	}

	cout << n;

	return 0;
}