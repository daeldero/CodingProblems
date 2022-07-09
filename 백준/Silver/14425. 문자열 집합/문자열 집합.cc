#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	set<string> arr;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		arr.insert(s);
	}

	int cnt = 0;
	for (int i = 0; i < m; ++i) {
		string s;
		cin >> s;
		if (arr.find(s) != end(arr)) ++cnt;
	}
	cout << cnt;

	return 0;
}