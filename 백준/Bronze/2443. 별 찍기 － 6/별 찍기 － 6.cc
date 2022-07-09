#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = n - 1; i >= 0; --i) {
		for (int j = i; j < n - 1; ++j) cout << ' ';
		for (int j = 0; j < 2 * i + 1; ++j) cout << '*';
		cout << '\n';
	}

	return 0;
}