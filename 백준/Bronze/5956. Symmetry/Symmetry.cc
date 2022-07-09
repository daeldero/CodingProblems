#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int cnt = 0;
	int now = 1;
	while (n > 1 && m > 1) {
		if (n % 2 == 0 || m % 2 == 0) break;
		cnt += now;
		n /= 2;
		m /= 2;
		now *= 4;
	}

	if (n % 2 != 0 && m % 2 != 0) cnt += now;

	cout << cnt;

	return 0;
}