#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, m;
	cin >> a >> m;

	int x = 1;
	while (true) {
		if (a * x % m == 1) break;
		++x;
	}
	cout << x;

	return 0;
}