#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrome(const string& s) {
	int n = s.size();
	for (int i = 0; i < n / 2; ++i) {
		if (s[i] != s[n - i - 1]) return false;
	}
	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int k;
		cin >> k;
		vector<string> arr(k);
		for (auto& s : arr) cin >> s;

		string s = "0";
		for (int i = 0; i < k; ++i) {
			for (int j = i + 1; j < k; ++j) {
				string temp = arr[i] + arr[j];
				if (IsPalindrome(temp)) {
					s = temp;
					break;
				}
				temp = arr[j] + arr[i];
				if (IsPalindrome(temp)) {
					s = temp;
					break;
				}
			}
		}
		cout << s << '\n';
	}

	return 0;
}