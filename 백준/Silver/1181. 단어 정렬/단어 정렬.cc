#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const string& s1, const string& s2) {
	int n1 = s1.size();
	int n2 = s2.size();

	if (n1 == n2) {
		return s1 < s2;
	}
	return n1 < n2;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> arr(n);
	for (auto& s : arr) cin >> s;
	sort(begin(arr), end(arr), compare);

	cout << arr[0] << '\n';
	for (int i = 1; i < n; ++i) {
		if (arr[i] != arr[i - 1]) cout << arr[i] << '\n';
	}

	return 0;
}