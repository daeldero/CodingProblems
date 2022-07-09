#include <iostream>
using namespace std;

int CountDivisors(int n) {
	int cnt = 0;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			++cnt;
			if (i != n / i) ++cnt;
		}
	}
	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int C;
	cin >> C;
	for (int c = 0; c < C; ++c) {
		int n;
		cin >> n;
		cout << n << ' ' << CountDivisors(n) << '\n';
	}


	return 0;
}