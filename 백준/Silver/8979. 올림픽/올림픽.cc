#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Country { int g, s, b, i; };

bool compare(const Country& c1, const Country& c2) {
	if (c1.g == c2.g) {
		if (c1.s == c2.s) return c1.b > c2.b;
		return c1.s > c2.s;
	}
	return c1.g > c2.g;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<Country> arr(n);
	for (auto& elt : arr) cin >> elt.i >> elt.g >> elt.s >> elt.b;
	sort(begin(arr), end(arr), compare);

	int rank = 1;
	vector<int> ranks(n);
	ranks[arr[0].i - 1] = 1;
	for (int i = 1; i < n; ++i) {
		const auto& now = arr[i];
		const auto& prev = arr[i - 1];
		if (now.g != prev.g || now.s != prev.s || now.b != prev.b) rank = i + 1;
		ranks[arr[i].i - 1] = rank;
	}
	cout << ranks[k - 1];

	return 0;
}