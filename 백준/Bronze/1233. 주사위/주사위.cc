#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	vector<int> cnt(s1 + s2 + s3 + 1, 0);
	for (int i = 1; i <= s1; ++i) {
		for (int j = 1; j <= s2; ++j) {
			for (int k = 1; k <= s3; ++k) {
				++cnt[i + j + k];
			}
		}
	}

	cout << max_element(begin(cnt), end(cnt)) - begin(cnt);

	return 0;
}