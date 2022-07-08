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
		string s;
		cin >> s;

		int score = 0;
		int cont = 0;
		for (const auto& c : s) {
			if (c == 'O') {
				++cont;
				score += cont;
			}
			else {
				cont = 0;
			}
		}
		cout << score << '\n';
	}
}