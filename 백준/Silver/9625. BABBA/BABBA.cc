#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;

	int a = 1;
	int b = 0;
	for (int i = 0; i < k; ++i) {
		int addB = a;
		int addA = b - a;
		a += addA;
		b += addB;
	}
	cout << a << ' ' << b;

	return 0;
}