#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int v, e;
		cin >> v >> e;
		cout << 2 + e - v << '\n';
	}

	return 0;
}