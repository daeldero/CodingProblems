#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		map<string, int> arr;
		for (int i = 0; i < n; ++i) {
			string s;
			cin >> s >> s;
			if (arr.find(s) != end(arr)) ++arr[s];
			else arr[s] = 1;
		}

		int comb = 1;
		for (auto iter = begin(arr); iter != end(arr); ++iter) {
			comb *= ((*iter).second + 1);
		}
		cout << comb - 1 << '\n';
	}


	return 0;
}