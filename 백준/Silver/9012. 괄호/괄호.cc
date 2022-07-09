#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;
		int n = s.size();

		bool flag = false;
		stack<char> arr;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '(') arr.push('(');
			else {
				if (arr.empty()) {
					flag = true;
					break;
				}
				arr.pop();
			}
		}

		if (flag || !arr.empty()) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}