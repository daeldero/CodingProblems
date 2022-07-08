#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		int sz = s.size();

		vector<bool> repeated(26, false);
		repeated[s[0] - 'a'] = true;

		bool cont = true;
		for (int j = 1; j < sz; ++j) {
			if (s[j] != s[j - 1]) {
				if (repeated[s[j] - 'a']) cont = false;
				repeated[s[j] - 'a'] = true;
			}
		}
		if (cont) ++cnt;
	}
	cout << cnt;
}