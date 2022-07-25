#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Counting(int& cnt0, int& cnt1, char c) {
	if (c == '0') ++cnt0;
	else ++cnt1;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	int cnt0 = 0;
	int cnt1 = 0;
	Counting(cnt0, cnt1, s[0]);
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] != s[i - 1]) {
			Counting(cnt0, cnt1, s[i]);
		}
	}
	cout << min(cnt0, cnt1);

	return 0;
}