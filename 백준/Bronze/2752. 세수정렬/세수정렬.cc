#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	int m = min(a, min(b, c));
	int M = max(a, max(b, c));

	cout << m << ' ' << a + b + c - m - M << ' ' << M;

	return 0;
}