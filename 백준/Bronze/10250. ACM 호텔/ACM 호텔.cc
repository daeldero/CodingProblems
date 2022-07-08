#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int h, w, n;
		cin >> h >> w >> n;

		int room, floor;
		if (n % h == 0) {
			room = n / h;
			floor = h;
		}
		else {
			room = n / h + 1;
			floor = n % h;
		}

		cout << floor;
		cout.fill('0');
		cout.width(2);
		cout << room << '\n';
	}
}