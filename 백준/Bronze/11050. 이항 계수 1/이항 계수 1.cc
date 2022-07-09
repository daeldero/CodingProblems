#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}

int combination(int n, int k) {
	return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	cout << combination(n, k);

	return 0;
}