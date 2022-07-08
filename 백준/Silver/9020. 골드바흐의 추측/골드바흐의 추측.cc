#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> EratosthenesSieve(int n) {
	vector<bool> primes(n + 1, true);
	primes[1] = false;

	for (int i = 2; i * i <= n; ++i) {
		if (primes[i]) {
			for (int j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<int> arr(T);
	for (auto& elt : arr) cin >> elt;

	int m = *max_element(begin(arr), end(arr));
	auto primes = EratosthenesSieve(m);

	for (const auto& elt : arr) {
		for (int i = elt / 2; i >= 2; --i) {
			if (primes[i] && primes[elt - i]) {
				cout << i << ' ' << elt - i << '\n';
				break;
			}
		}
	}

	return 0;
}