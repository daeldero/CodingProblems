#include <iostream>
#include <string>
using namespace std;

bool HasString(const string& doc, const string& s, int idx) {
	int m = s.size();
	for (int i = 0; i < m; ++i) {
		if (s[i] != doc[i + idx]) return false;
	}
	return true;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string doc;
	getline(cin, doc);

	string s;
	getline(cin, s);

	if (doc.size() < s.size()) {
		cout << 0;
	}
	else {
		int cnt = 0;
		for (int i = 0; i <= doc.size() - s.size(); ++i) {
			if (HasString(doc, s, i)) {
				++cnt;
				i += (s.size() - 1);
			}
		}
		cout << cnt;
	}

	return 0;
}