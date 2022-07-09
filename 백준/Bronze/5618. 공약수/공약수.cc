#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

vector<int> ComputeDividors(int n) {
	vector<int> arr;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			arr.push_back(i);
			if (n / i != i) arr.push_back(n / i);
		}
	}
	return arr;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int a, b;
	cin >> a >> b;

	int g = gcd(a, b);
	if (n == 3) {
		cin >> b;
		g = gcd(g, b);
	}

	auto div = ComputeDividors(g);
	sort(begin(div), end(div));
	for (const auto& elt : div) cout << elt << '\n';

	return 0;
}