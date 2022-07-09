#include <iostream>
using namespace std;

int ComputeDivisorSum(int n) {
	int sum = 0;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			sum += i;
			if (i != n / i) sum += (n / i);
		}
	}
	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cout << ComputeDivisorSum(n) * 5 - 24;

	return 0;
}