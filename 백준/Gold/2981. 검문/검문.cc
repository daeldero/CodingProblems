#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

vector<int> ComputeDivisors(int n) {
	vector<int> divisors;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			divisors.push_back(i);
			if (i != n / i) divisors.push_back(n / i);
		}
	}
	sort(begin(divisors), end(divisors));
	divisors.push_back(n);
	return divisors;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	int m = arr[1] - arr[0];
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			m = gcd(m, arr[j] - arr[i]);
		}
	}

	auto divisors = ComputeDivisors(m);
	for (const auto& elt : divisors) cout << elt << ' ';

	return 0;
}