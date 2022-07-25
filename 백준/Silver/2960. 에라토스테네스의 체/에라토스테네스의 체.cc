#include <iostream>
#include <vector>
using namespace std;

void Counting(int& cnt, int k, int n) {
	if (++cnt == k) cout << n;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<bool> is_prime(n + 1, true);
	
	int cnt = 0;
	for (int i = 2; i <= n; ++i) {
		if (is_prime[i]) {
			Counting(cnt, k, i);
			for (int j = i * i; j <= n; j += i) {
				if (is_prime[j]) {
					is_prime[j] = false;
					Counting(cnt, k, j);
				}
			}
		}
	}

	return 0;
}