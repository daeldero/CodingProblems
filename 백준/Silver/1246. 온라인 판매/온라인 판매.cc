#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> price(m);
	for (auto& p : price) cin >> p;
	sort(begin(price), end(price), greater<int>());

	int income = 0;
	int idx = 0;
	
	if (m > n) m = n;
	for (int i = 0; i < m; ++i) {
		int now = (i + 1) * price[i];
		if (now > income) {
			income = now;
			idx = i;
		}
	}

	cout << price[idx] << ' ' << income;

	return 0;
}