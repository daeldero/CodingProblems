#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		int y;
		cin >> y;
		if (y < x) cout << y << ' ';
	}
}