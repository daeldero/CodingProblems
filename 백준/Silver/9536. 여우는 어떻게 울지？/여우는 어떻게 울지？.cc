#include <iostream>
#include <list>
#include <string>
#include <sstream>
using namespace std;

list<string> SplitString(string& s) {
	list<string> arr;
	istringstream iss(s);
	while (getline(iss, s, ' ')) {
		arr.push_back(s);
	}
	return arr;
}

string GetCrying(string s) {
	return SplitString(s).back();
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	getline(cin, s);

	int T = stoi(s);
	for (int t = 0; t < T; ++t) {
		string crying;
		getline(cin, crying);
		
		auto arr = SplitString(crying);

		while (s != "what does the fox say?") {
			getline(cin, s);
			auto target = GetCrying(s);
			auto iter = begin(arr);
			while (iter != end(arr)) {
				if (*iter == target) {
					iter = arr.erase(iter);
				}
				else ++iter;
			}
		}
		s = "";

		for (const auto& elt : arr) cout << elt << ' ';
		cout << '\n';
	}

	return 0;
}