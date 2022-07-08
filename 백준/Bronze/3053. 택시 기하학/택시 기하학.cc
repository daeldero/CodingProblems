#include <iostream>
using namespace std;

const double pi = 3.14159265359;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	double r;
	cin >> r;

	cout.precision(4);
	cout << fixed << r * r * pi << '\n' << r * r * 2.0;

	return 0;
}