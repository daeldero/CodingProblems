#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, l;
	cin >> n >> l;

	vector<int> hs(n);
	for (auto& h : hs) cin >> h;
	sort(begin(hs), end(hs));

	for (int i = 0; i < n; ++i) {
		if (hs[i] <= l) ++l;
		else break;
	}
	cout << l;

	return 0;
}