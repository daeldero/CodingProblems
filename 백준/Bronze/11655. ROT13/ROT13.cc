#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	getline(cin, s);

	for (auto& c : s) {
		if (c >= 'a' && c <= 'z') {
			int x = c + 13;
			if (x > static_cast<int>('z')) x -= ('z' - 'a' + 1);
			c = static_cast<char>(x);
		}
		if (c >= 'A' && c <= 'Z') {
			int x = c + 13;
			if (x > static_cast<int>('Z')) x -= ('Z' - 'A' + 1);
			c = static_cast<char>(x);
		}
	}
	cout << s;
	
	return 0;
}