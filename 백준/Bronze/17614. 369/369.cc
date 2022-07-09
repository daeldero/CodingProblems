#include <iostream>
using namespace std;

bool Is369(int n) {
	return (n == 3 || n == 6 || n == 9);
}

int CountClap(int n) {
	int cnt = 0;
	while (n != 0) {
		if (Is369(n % 10)) ++cnt;
		n /= 10;
	}
	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; ++i) cnt += CountClap(i);
	cout << cnt;

	return 0;
}