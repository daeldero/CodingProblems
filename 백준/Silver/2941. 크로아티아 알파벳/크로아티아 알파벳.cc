#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	int cnt = 0;
	for (int i = n - 1; i >= 0; --i) {
		if (s[i] == '-') --i;
		else if (s[i] == 'j') {
			if (i > 0 && (s[i - 1] == 'l' || s[i - 1] == 'n')) --i;
		}
		else if (s[i] == '=') {
			if (i > 0) {
				--i;
				if (s[i] == 'z' && i > 0 && s[i - 1] == 'd') --i;
			}
		}
		++cnt;
	}
	cout << cnt;

	return 0;
}