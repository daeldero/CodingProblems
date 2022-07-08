#include <iostream>
#include <vector>
using namespace std;

int d(int n) {
	int result = n;
	while (n != 0) {
		result += (n % 10);
		n /= 10;
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 2; i <= n; ++i) {
		if (d(i) == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;


	return 0;
}