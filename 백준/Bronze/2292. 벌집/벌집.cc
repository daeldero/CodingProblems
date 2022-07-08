#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	long long n;
	cin >> n;
	--n;

	if (n == 0) {
		cout << 1;
		return 0;
	}

	long long cnt = 0;
	while (n > 3 * (cnt * cnt - cnt)) {
		++cnt;
	}
	cout << cnt;

	return 0;
}