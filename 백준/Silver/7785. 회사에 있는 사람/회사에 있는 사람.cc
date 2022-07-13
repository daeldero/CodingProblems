#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	set<string> arr;
	for (int i = 0; i < n; ++i) {
		string s, el;
		cin >> s >> el;
		if (el == "enter") arr.insert(s);
		else arr.erase(s);
	}

	for (auto i = rbegin(arr); i != rend(arr); ++i) cout << (*i) << '\n';

	return 0;
}