#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

void InputDict(int n, set<string>& dict) {
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		dict.insert(s);
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	set<string> unseen, unlistened;
	InputDict(n, unseen);
	InputDict(m, unlistened);

	vector<string> arr;
	for (auto iter = begin(unseen); iter != end(unseen); ++iter) {
		if (unlistened.find(*iter) != end(unlistened)) arr.push_back(*iter);
	}
	
	cout << arr.size() << '\n';
	for (const auto& s : arr) cout << s << '\n';

	return 0;
}