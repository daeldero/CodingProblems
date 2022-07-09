#include <iostream>
using namespace std;

bool isPrime(int x) {
	if (x == 1) return false;
	if (x == 2 || x == 3) return true;

	for (int i = 2; i <= x / 2; ++i) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (isPrime(x)) ++cnt;
	}

	cout << cnt;

	return 0;
}