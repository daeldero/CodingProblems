#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int m = 1000000;
	int M = 1;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m = (x < m) ? x : m;
		M = (x > M) ? x : M;
	}

	cout << m * M;

	return 0;
}