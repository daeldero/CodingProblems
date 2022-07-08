#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	vector<int> arr(26, -1);
	for (int i = 0; i < n; ++i) {
		int idx = s[i] - 'a';
		if (arr[idx] == -1) arr[idx] = i;
	}
	for (const auto& elt : arr) cout << elt << ' ';
}