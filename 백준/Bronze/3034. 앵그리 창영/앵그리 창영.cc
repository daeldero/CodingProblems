#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, w, h;
	cin >> n >> w >> h;

	int c = w * w + h * h;

	for (int i = 0; i < n; ++i) {
		int l;
		cin >> l;
		if (c >= l * l) cout << "DA\n";
		else cout << "NE\n";
	}

	return 0;
}