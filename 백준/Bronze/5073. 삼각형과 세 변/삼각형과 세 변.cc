#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		if (a + b + c <= max(a, max(b, c)) * 2) cout << "Invalid\n";
		else if (a == b && a == c && b == c) cout << "Equilateral\n";
		else if (a == b || a == c || b == c) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}
	
	return 0;
}