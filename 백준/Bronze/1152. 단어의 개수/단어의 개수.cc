#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	getline(cin, s);
	int n = s.size();

	int cnt = 1;
	if (n == 1 && s == " ") cnt = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (s[i] == ' ') ++cnt;
	}
	cout << cnt;

	return 0;
}