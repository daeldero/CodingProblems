#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	sort(begin(s), end(s), greater<char>());

	int sum = 0;
	for (const auto& c : s) sum += (c - '0');

	if (s.back() != '0' || sum % 3 != 0) cout << -1;
	else cout << s;

	return 0;
}