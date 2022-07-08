#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int r;
		string s;
		cin >> r >> s;
		for (const auto& c : s) {
			for (int i = 0; i < r; ++i) cout << c;
		}
		cout << '\n';
	}
}