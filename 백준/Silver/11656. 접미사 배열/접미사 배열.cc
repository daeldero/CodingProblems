#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	vector<string> arr(n);
	for (int i = 0; i < n; ++i) {
		arr[i] = s.substr(i, n - i);
	}
	sort(begin(arr), end(arr));

	for (const auto& str : arr) cout << str << '\n';
	
	return 0;
}