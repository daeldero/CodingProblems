#include <iostream>
using namespace std;

bool IsInteger(int a, int b, int m) {
	int num = a * a + b * b + m;
	int den = a * b;

	return (num % den == 0);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		int cnt = 0;
		for (int a = 1; a < n; ++a) {
			for (int b = a + 1; b < n; ++b) {
				if (IsInteger(a, b, m)) ++cnt;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}