#include <iostream>
#include <string>
using namespace std;

void PrintFlipped(const string& s) {
	for (int i = s.size() - 1; i >= 0; --i) cout << s[i];
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	getline(cin, s);

	int T = stoi(s);
	for (int t = 0; t < T; ++t) {
		getline(cin, s, '\n');

		string word = "";
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == ' ') {
				PrintFlipped(word);
				cout << ' ';
				word.clear();
			}
			else word += s[i];
		}
		PrintFlipped(word);
		cout << '\n';
	}

	return 0;
}