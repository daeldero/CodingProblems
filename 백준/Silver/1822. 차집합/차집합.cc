#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Set(int n) {
	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));
	return arr;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int na, nb;
	cin >> na >> nb;

	auto a = Set(na);
	auto b = Set(nb);

	vector<int> result;
	set_difference(begin(a), end(a), begin(b), end(b), back_inserter(result));

	cout << result.size() << '\n';
	if (!result.empty()) {
		for (const auto& elt : result) cout << elt << ' ';
	}

	return 0;
}