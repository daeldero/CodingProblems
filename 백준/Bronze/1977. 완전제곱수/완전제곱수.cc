#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> squares(100);
	for (int i = 1; i <= 100; ++i) squares[i - 1] = i * i;

	int sum = 0;
	int minSqr = 10000;
	for (int i = n; i <= m; ++i) {
		if (binary_search(begin(squares), end(squares), i)) {
			sum += i;
			if (i < minSqr) minSqr = i;
		}
	}

	if (sum == 0) cout << -1;
	else cout << sum << '\n' << minSqr;

	return 0;
}