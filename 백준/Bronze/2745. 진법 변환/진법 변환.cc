#include <iostream>
#include <string>
using namespace std;

int CharToNum(char c) {
	if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
	return c - '0';
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	int b;
	cin >> s >> b;

	int n = 0;
	int mult = 1;
	for (int i = s.size() - 1; i >= 0; --i) {
		n += CharToNum(s[i]) * mult;
		mult *= b;
	}
	cout << n;

	return 0;
}