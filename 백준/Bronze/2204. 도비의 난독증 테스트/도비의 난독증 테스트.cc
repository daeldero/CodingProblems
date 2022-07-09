#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void TransToUpper(string& s) {
	for (auto& c : s) {
		if (c >= 'a' && c <= 'z') c -= ('a' - 'A');
	}
}

bool compare(const string& s1, const string& s2) {
	string S1{ s1 };
	string S2{ s2 };
	TransToUpper(S1);
	TransToUpper(S2);
	return S1 < S2;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;

		vector<string> arr(n);
		for (auto& s : arr) cin >> s;
		sort(begin(arr), end(arr), compare);
		cout << arr.front() << '\n';
	}


	return 0;
}