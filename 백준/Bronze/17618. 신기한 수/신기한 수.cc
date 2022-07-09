#include <iostream>
using namespace std;

int DigitSum(int n) {
	int sum = 0;
	while (n != 0) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (i % DigitSum(i) == 0) ++cnt;
	}
	cout << cnt;

	return 0;
}