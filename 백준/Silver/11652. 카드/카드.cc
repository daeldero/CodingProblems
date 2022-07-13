#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<ll> cards(n);
	for (auto& card : cards) cin >> card;
	sort(begin(cards), end(cards));

	pair <int, int> maxCntIdx{ 0, 0 };
	pair<bool, int> continuity{ false, 0 };
	for (int i = 1; i < n; ++i) {
		if (cards[i] == cards[i - 1]) {
			if (continuity.first) ++continuity.second;
			else {
				continuity.first = true;
				continuity.second = 2;
			}
		}
		else {
			continuity.first = false;
			continuity.second = 0;
		}
		if (continuity.second > maxCntIdx.first) {
			maxCntIdx.first = continuity.second;
			maxCntIdx.second = i;
		}
	}
	cout << cards[maxCntIdx.second];

	return 0;
}