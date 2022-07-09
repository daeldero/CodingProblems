#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	long long n, m;
	cin >> n >> m;

	if (n > m) cout << n - m;
	else cout << m - n;

	return 0;
}