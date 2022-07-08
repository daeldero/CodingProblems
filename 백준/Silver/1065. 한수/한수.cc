#include <iostream>
#include <vector>
using namespace std;

bool isHansu(int n) {
	if (n < 100) return true;

	int d = (n / 10) % 10 - (n % 10);
	n /= 10;
	while (n / 10 != 0) {
		if (d != (n / 10) % 10 - (n % 10)) return false;
		n /= 10;
	}
	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (isHansu(i)) ++cnt;
	}
	cout << cnt;
}