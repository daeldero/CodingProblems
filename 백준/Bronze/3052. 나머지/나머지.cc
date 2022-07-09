#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(10);
	for (auto& elt : arr) cin >> elt;

	vector<int> cnt(42, 0);
	for (const auto& elt : arr) ++cnt[elt % 42];

	int diff = 0;
	for (const auto& elt : cnt) if (elt != 0) ++diff;
	cout << diff;
}