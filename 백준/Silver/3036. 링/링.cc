#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> ring(n);
	for (auto& elt : ring) cin >> elt;

	for (int i = 1; i < n; ++i) {
		int d = gcd(ring[0], ring[i]);
		cout << ring[0] / d << '/' << ring[i] / d << '\n';
	}

	return 0;
}