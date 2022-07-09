#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<int> coins(n);
	for (auto& coin : coins) cin >> coin;

	int cnt = 0;
	for (auto i = rbegin(coins); i != rend(coins); ++i) {
		cnt += k / (*i);
		k %= (*i);
	}
	cout << cnt;

	return 0;
}