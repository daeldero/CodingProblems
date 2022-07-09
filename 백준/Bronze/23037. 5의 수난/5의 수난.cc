#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int result = 0;
	for (int i = 0; i < 5; ++i) {
		int k = n % 10;
		result += k * k * k * k * k;
		n /= 10;
	}
	cout << result;

	return 0;
}