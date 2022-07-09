#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int th = 2; th < n; th += 2) {
		int rem = n - th;
		for (int nk = 1; nk < rem; ++nk) {
			if (rem - nk >= nk + 2) ++cnt;
		}
	}
	cout << cnt;

	return 0;
}