#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isCapital(char c) {
	return ((c >= 'A') && (c <= 'Z'));
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	vector<int> arr(26, 0);
	for (const auto& c : s) {
		int idx = isCapital(c) ? (c - 'A') : (c - 'a');
		++arr[idx];
	}

	int mIdx = 0;
	for (int i = 0; i < 26; ++i) {
		if (arr[i] > arr[mIdx]) mIdx = i;
	}
	for (int i = mIdx + 1; i < 26; ++i) {
		if (arr[i] == arr[mIdx]) {
			cout << '?';
			return 0;
		}
	}
	cout << static_cast<char>(mIdx + 'A');

	return 0;
}