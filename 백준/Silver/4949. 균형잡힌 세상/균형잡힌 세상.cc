#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		int n = s.size();

		bool flag = true;
		stack<char> arr;
		for (const auto& c : s) {
			if (c == '(') arr.push('(');
			if (c == ')') {
				if (arr.empty() || (arr.top() != '(')) {
					flag = false;
					break;
				}
				arr.pop();
			}
			if (c == '[') arr.push('[');
			if (c == ']') {
				if (arr.empty() || (arr.top() != '[')) {
					flag = false;
					break;
				}
				arr.pop();
			}
		}

		if (!flag || !arr.empty()) cout << "no\n";
		else cout << "yes\n";
	}

	return 0;
}