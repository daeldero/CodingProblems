#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	double d1, d2;
	cin >> d1 >> d2;

	cout.precision(6);
	cout << fixed << d1 * 2.0 + 2.0 * 3.141592 * d2;

	return 0;
}