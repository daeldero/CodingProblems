#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;

	int v;
	cin >> v;

	int cnt = 0;
	for (const auto& elt : arr) if (elt == v) ++cnt;
	cout << cnt;

	return 0;
}