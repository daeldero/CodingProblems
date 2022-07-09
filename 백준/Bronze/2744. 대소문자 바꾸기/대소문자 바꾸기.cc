#include <iostream>
#include <string>
using namespace std;

char ChangeCharacter(char c) {
	if (c >= 'A' && c <= 'Z') return static_cast<char>(c - 'A' + 'a');
	return static_cast<char>(c - 'a' + 'A');
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	for (const auto& c : s) cout << ChangeCharacter(c);

	return 0;
}