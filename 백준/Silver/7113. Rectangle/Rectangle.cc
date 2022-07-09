#include <iostream>
using namespace std;

void MinMaxSwap(int& n, int& m) {
	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}
}

int DivideCounting(int n, int m) {
	MinMaxSwap(n, m);
	
	int cnt = m / n;
	m -= n * cnt;
	if (m == 0) return cnt;
	return cnt + DivideCounting(n, m);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	MinMaxSwap(n, m);
	cout << DivideCounting(n, m);

	return 0;
}