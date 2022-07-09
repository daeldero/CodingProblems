#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	map<int, string> numArr;
	map<string, int> strArr;
	for (int i = 1; i <= n; ++i) {
		string s;
		cin >> s;
		numArr[i] = s;
		strArr[s] = i;
	}

	for (int i = 0; i < m; ++i) {
		string s;
		cin >> s;

		if (s[0] >= '0' && s[0] <= '9') cout << numArr[stoi(s)] << '\n';
		else cout << strArr[s] << '\n';
	}

	return 0;
}