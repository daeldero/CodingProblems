#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	set<string> arr;
	for (int i = 0; i < n; ++i) {
		for (int j = 1; j < n - i + 1; ++j) {
			arr.insert(s.substr(i, j));
		}
	}
	cout << arr.size();

	return 0;
}