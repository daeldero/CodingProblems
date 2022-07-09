#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;

	int n = 1;
	while (x > (n * n + n) / 2) ++n;
	x -= (n * n - n) / 2;
	
	if (n % 2 == 0) cout << x << '/' << n + 1 - x;
	else cout << n + 1 - x << '/' << x;

	return 0;
}