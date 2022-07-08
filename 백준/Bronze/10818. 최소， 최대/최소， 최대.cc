#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int m = 1000000;
	int M = -m;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x > M) M = x;
		if (x < m) m = x;
	}
	cout << m << ' ' << M;
}