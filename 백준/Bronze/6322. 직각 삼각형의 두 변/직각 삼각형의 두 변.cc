#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t = 1;
	while (true) {
		double a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		cout << "Triangle #" << t++ << '\n';
		if (c == -1) {
			cout.precision(3);
			cout << "c = " << fixed << sqrt(a * a + b * b) << "\n\n";
		}
		else if (a == -1) {
			if (c * c <= b * b) cout << "Impossible.\n\n";
			else {
				cout.precision(3);
				cout << "a = " << fixed << sqrt(c * c - b * b) << "\n\n";
			}
		}
		else {
			if (c * c <= a * a) cout << "Impossible.\n\n";
			else {
				cout.precision(3);
				cout << "b = " << fixed << sqrt(c * c - a * a) << "\n\n";
			}
		}
	}
	
	return 0;
}