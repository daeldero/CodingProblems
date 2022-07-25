#include <iostream>
#include <vector>
using namespace std;

vector<int> Eratosthenes(int n) {
	auto is_prime = vector<bool>(n + 1, true);
	is_prime[0] = false;
	is_prime[1] = false;
	
	for (int i = 2; i <= n; ++i) {
		if (is_prime[i]) {
			for (int j = i * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}

	vector<int> primes;
	for (int i = 0; i <= n; ++i) {
		if (is_prime[i]) primes.push_back(i);
	}
	return primes;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n == 1 || n == 2) {
		cout << 6;
	}
	else {
		auto primes = Eratosthenes(n);
		int special = 0;
		for (int i = 0; n >= special; ++i) {
			special = primes[i] * primes[i + 1];
		}
		cout << special;
	}


	return 0;
}