#include <iostream>
#include <set>
using namespace std;

set<int> SetSet(int n) {
	set<int> st;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		st.insert(x);
	}
	return st;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int na, nb;
	cin >> na >> nb;

	auto a = SetSet(na);
	auto b = SetSet(nb);

	for (const auto& elt : b) {
		a.erase(elt);
	}

	cout << a.size() << '\n';
	if (!a.empty()) {
		for (const auto& elt : a) cout << elt << ' ';
	}

	return 0;
}