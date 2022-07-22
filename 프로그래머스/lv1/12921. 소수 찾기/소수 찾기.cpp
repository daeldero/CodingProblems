#include <string>
#include <vector>

using namespace std;

vector<bool> EratosthenesSieve(int n) {
	vector<bool> primes(n + 1, true);
    primes[0] = false;
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

int solution(int n) {
    int answer = 0;
    auto arr = EratosthenesSieve(n);
    for (const auto& elt : arr) {
        if (elt) ++answer;
    }
    return answer;
}