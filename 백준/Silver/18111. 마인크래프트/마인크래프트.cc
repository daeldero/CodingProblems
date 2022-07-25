#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vec = vector<int>;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m, b;
	cin >> n >> m >> b;

	auto arr = vector<vec>(n, vec(m));
	for (auto& row : arr) {
		for (auto& elt : row) cin >> elt;
	}

	vector<int> times(257, 500 * 500 * 256 * 2);
	for (int h = 256; h >= 0; --h) {
		int add = 0;
		int diff = 0;
		for (const auto& row : arr) {
			for (const auto& elt : row) {
				if (elt < h) add += (h - elt);
				else diff += (elt - h);
			}
		}
		if (add > diff + b) continue;
		times[h] = add + diff * 2;
	}

	auto iter = min_element(rbegin(times), rend(times));
	cout << *iter << ' ' << iter.base() - begin(times) - 1;

	return 0;
}