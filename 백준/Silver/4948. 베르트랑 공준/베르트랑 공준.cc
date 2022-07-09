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

	vector<int> arr;
	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;
		arr.push_back(n);
	}

	int m = *max_element(begin(arr), end(arr));
	auto primes = EratosthenesSieve(2 * m);

	for (const auto& elt : arr) {
		int cnt = 0;
		for (int i = elt + 1; i <= 2 * elt; ++i) {
			if (primes[i]) ++cnt;
		}
		cout << cnt << '\n';
	}


	return 0;
}