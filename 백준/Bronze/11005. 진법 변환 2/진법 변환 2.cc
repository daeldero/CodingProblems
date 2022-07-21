#include <iostream>
#include <string>
using namespace std;

char NumToChar(int n) {
	if (n >= 10) return static_cast<char>(n - 10 + 'A');
	return static_cast<char>(n + '0');
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, b;
	cin >> n >> b;

	string s = "";
	while (n != 0) {
		s += NumToChar(n % b);
		n /= b;
	}
	for (auto i = rbegin(s); i != rend(s); ++i) cout << *i;

	return 0;
}