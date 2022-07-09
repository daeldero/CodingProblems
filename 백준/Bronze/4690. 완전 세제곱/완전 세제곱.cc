#include <iostream>
using namespace std;

void PrintABCD(int a, int b, int c, int d) {
	cout << "Cube = " << a << ", Triple = (" << b << ',' << c << ',' << d << ")\n";
}

int Cube(int n) {
	return n * n * n;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	for (int a = 2; a <= 100; ++a) {
		for (int b = 2; b < a; ++b) {
			for (int c = b; c < a; ++c) {
				for (int d = c; d < a; ++d) {
					if (Cube(a) == Cube(b) + Cube(c) + Cube(d)) PrintABCD(a, b, c, d);
				}
			}
		}
	}

	return 0;
}