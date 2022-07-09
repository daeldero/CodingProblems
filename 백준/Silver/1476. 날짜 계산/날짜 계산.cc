#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int e, s, m;
	cin >> e >> s >> m;

	int year = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	while (true) {
		++year;
		if (++a == 16) a = 1;
		if (++b == 29) b = 1;
		if (++c == 20) c = 1;

		if (a == e && b == s && c == m) break;
	}
	cout << year;

	return 0;
}