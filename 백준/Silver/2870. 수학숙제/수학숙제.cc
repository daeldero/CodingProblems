#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void PushNumberFromString(vector<string>& arr, const string& s) {
	int n = s.size();

	bool continuity = true;
	string num = "";
	for (int i = 0; i < n; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			num += s[i];
			continuity = true;
		}
		else continuity = false;

		if (num != "" && !continuity) {
			arr.push_back(num);
			num = "";
		}
	}
	if (num != "") arr.push_back(num);
}

bool compare(const string& s1, const string& s2) {
	if (s1.size() == s2.size()) return s1 < s2;
	return s1.size() < s2.size();
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> arr;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		PushNumberFromString(arr, s);
	}

	for (auto& elt : arr) {
		int idx = 0;
		for (idx = 0; idx < elt.size(); ++idx) {
			if (elt[idx] != '0') break;
		}
		if (elt.size() - idx == 0) elt = "0";
		else elt = elt.substr(idx, elt.size() - idx);
	}
	sort(begin(arr), end(arr), compare);
	
	for (const auto& elt : arr) cout << elt << '\n';

	return 0;
}