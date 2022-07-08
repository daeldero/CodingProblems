#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	for (const auto& elt : arr) cout << elt << '\n';

	return 0;
}