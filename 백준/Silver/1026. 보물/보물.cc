#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> a(n), b(n);
	for (auto& elt : a) cin >> elt;
	for (auto& elt : b) cin >> elt;
	sort(begin(a), end(a));
	sort(begin(b), end(b));

	int sum = 0;
	for (int i = 0; i < n; ++i) sum += a[i] * b[n - 1 - i];
	cout << sum;

	return 0;
}