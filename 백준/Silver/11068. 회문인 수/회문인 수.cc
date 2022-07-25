#include <iostream>
#include <vector>
using namespace std;

vector<int> BaseConversion(int n, int b) {
	vector<int> converted;
	while (n != 0) {
		converted.push_back(n % b);
		n /= b;
	}
	return converted;
}

bool IsPalindrome(const vector<int>& n) {
	int sz = n.size();
	for (int i = 0; i < sz / 2; ++i) {
		if (n[i] != n[sz - i - 1]) return false;
	}
	return true;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		bool flag = false;
		for (int b = 2; b <= 64; ++b) {
			if (IsPalindrome(BaseConversion(n, b))) {
				flag = true;
				break;
			}
		}
		cout << flag << '\n';
	}

	return 0;
}