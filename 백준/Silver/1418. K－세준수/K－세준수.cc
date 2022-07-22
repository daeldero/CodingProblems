#include <iostream>
#include <vector>
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

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	int cnt = 1;
	auto primes = EratosthenesSieve(n);
	for (int i = 2; i <= n; ++i) {
		if (i <= k) {
			++cnt;
			continue;
		}

		int now = i;
		int j = 2;
		while (now != 1) {
			if (primes[j] && now % j == 0) {
				now /= j;
			}
			else ++j;

			if (j > k) {
				break;
			}
		}
		if (j <= k) ++cnt;
	}
	cout << cnt;

	return 0;
}