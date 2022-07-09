#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (auto& elt : a) cin >> elt;

	vector<int> b(m);
	for (auto& elt : b) cin >> elt;
	
	vector<int> c(n + m);
	merge(begin(a), end(a), begin(b), end(b), begin(c));
	for (const auto& elt : c) cout << elt << ' ';

	return 0;
}