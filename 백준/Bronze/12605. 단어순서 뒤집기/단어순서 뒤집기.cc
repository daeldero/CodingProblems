#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

stack<string> SplitString(string& s) {
	stack<string> splitted;
	istringstream iss(s);

	string word;
	while (getline(iss, word, ' ')) {
		splitted.push(word);
	}
	return splitted;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string N;
	getline(cin, N);

	int n = stoi(N);
	for (int i = 0; i < n; ++i) {
		string s;
		getline(cin, s);
		
		auto arr = SplitString(s);
		cout << "Case #" << i + 1 << ": ";
		while (!arr.empty()) {
			cout << arr.top() << ' ';
			arr.pop();
		}
		cout << '\n';
	}

	return 0;
}