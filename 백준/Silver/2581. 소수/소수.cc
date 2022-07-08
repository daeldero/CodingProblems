#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isPrime(int x) {
	if (x == 1) return false;
	if (x == 2 || x == 3) return true;

	for (int i = 2; i <= x / 2; ++i) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int m, n;
	cin >> m >> n;

	vector<int> arr;
	for (int i = m; i <= n; ++i) {
		if (isPrime(i)) arr.push_back(i);
	}

	if (arr.size() == 0) {
		cout << -1;
		return 0;
	}

	cout << reduce(begin(arr), end(arr)) << '\n' << arr.front();
	

	return 0;
}