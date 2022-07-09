#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> cards(n);
	for (auto& elt : cards) cin >> elt;
	sort(begin(cards), end(cards));

	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int card;
		cin >> card;
		cout << binary_search(begin(cards), end(cards), card) << ' ';
	}

	return 0;
}