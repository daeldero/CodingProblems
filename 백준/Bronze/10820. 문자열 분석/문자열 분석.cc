#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		string s;
		getline(cin, s);
		if (cin.eof()) break;

		vector<int> cnts(4, 0);
		for (const auto& c : s) {
			if (c >= 'a' && c <= 'z') ++cnts[0];
			else if (c >= 'A' && c <= 'Z') ++cnts[1];
			else if (c >= '0' && c <= '9') ++cnts[2];
			else ++cnts[3];
		}
		for (const auto& elt : cnts) cout << elt << ' ';
		cout << '\n';
	}
	
	return 0;
}