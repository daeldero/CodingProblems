#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<string> arr;
	arr.reserve(50);

	while (true) {
		string s;
		getline(cin, s);
		if (cin.eof()) break;
		arr.push_back(s);
	}

	vector<int> cnt(26, 0);

	int n = arr.size();
	for (int i = 0; i < n; ++i) {
		for (const auto& c : arr[i]) {
			if (c != ' ') ++cnt[c - 'a'];
		}
	}

	int maxCnt = *max_element(begin(cnt), end(cnt));
	for (int i = 0; i < 26; ++i) {
		if (cnt[i] == maxCnt) cout << static_cast<char>(i + 'a');
	}
	
	return 0;
}