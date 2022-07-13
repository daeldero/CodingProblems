#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << "Scenario #" << i << ":\n";
		int m = max(a, max(b, c));
		if (a * a + b * b + c * c == m * m * 2) cout << "yes\n\n";
		else cout << "no\n\n";
	}
	
	return 0;
}