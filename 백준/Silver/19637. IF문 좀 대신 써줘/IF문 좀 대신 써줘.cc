#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<pair<int, string>> title(n);
	for (auto& elt : title) {
		cin >> elt.second >> elt.first;
	}

	for (int i = 0; i < m; ++i) {
		int power;
		cin >> power;
		auto iter = upper_bound(begin(title), end(title), pair<int, string>{power, ""});
		cout << (*iter).second << '\n';
	}

	return 0;
}