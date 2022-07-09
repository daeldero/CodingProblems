#include <iostream>
using namespace std;

int CountFive(int n) {
	int cnt = 0;
	while (n % 5 == 0) {
		n /= 5;
		++cnt;
	}
	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 5; i <= n; ++i) cnt += CountFive(i);
	cout << cnt;

	return 0;
}