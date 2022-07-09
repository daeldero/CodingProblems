#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	vector<int> arr(10, 0);
	for (const auto& c : s) ++arr[c - '0'];

	int m = 0;
	for (int i = 0; i < 10; ++i) {
		if (i == 6 || i == 9) continue;
		if (arr[i] > m) m = arr[i];
	}

	int sn = arr[6] + arr[9];
	if (sn % 2 == 0) sn /= 2;
	else sn = sn / 2 + 1;

	if (m > sn) cout << m;
	else cout << sn;

	return 0;
}