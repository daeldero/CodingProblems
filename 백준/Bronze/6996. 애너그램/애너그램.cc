#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << s1 << " & " << s2 << " are ";
		sort(begin(s1), end(s1));
		sort(begin(s2), end(s2));
		if (s1 != s2) cout << "NOT ";
		cout << "anagrams.\n";
	}

	return 0;
}