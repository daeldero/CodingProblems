#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		string s;
		cin >> s;
		if (s == "0") break;
		int n = s.size();

		bool flag = true;
		for (int i = 0; i <= n / 2; ++i) {
			if (s[i] != s[n - i - 1]) flag = false;
		}
		if (flag) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}