#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, f;
	cin >> n >> f;

	n /= 100;
	n *= 100;

	for (int i = 0; i < 100; ++i) {
		if ((n + i) % f == 0) {
			cout.width(2);
			cout.fill('0');
			cout << i;
			break;
		}
	}

	return 0;
}