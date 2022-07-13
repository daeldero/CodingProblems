#include <iostream>
using namespace std;

int Sqr(int n) {
	return n * n;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int a = 1; a <= 500; ++a) {
		for (int b = 1; b <= a; ++b) {
			if (Sqr(a) == Sqr(b) + n) ++cnt;
		}
	}
	cout << cnt;

	return 0;
}