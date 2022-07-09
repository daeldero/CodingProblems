#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> EratosthenesSeive(int n) {
	vector<bool> primes(n + 1, true);
	primes[0] = false;
	primes[1] = false;

	for (int i = 2; i * i <= n; ++i) {
		if (primes[i]) {
			for (int j = i * i; j <= n; j += i) primes[j] = false;
		}
	}
	return primes;
}

pair<int, int> TestThreePrimes(const vector<bool>& primes, int n) {
	for (int i = 2; i < n; ++i) {
		if (primes[i]) {
			for (int j = i; j < n; ++j) {
				if (primes[j]) {
					int k = n - i - j;
					if (primes[k]) return { i, j };
				}
			}
		}
	}
	return { 0, 0 };
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<int> arr(T);
	for (auto& elt : arr) cin >> elt;
	int maxElt = *max_element(begin(arr), end(arr));

	auto primes = EratosthenesSeive(maxElt);
	for (const auto& elt : arr) {
		auto result = TestThreePrimes(primes, elt);
		const auto& [i, j] = result;
		if (i == 0) cout << 0 << '\n';
		else cout << i << ' ' << j << ' ' << elt - i - j << '\n';
	}

	return 0;
}