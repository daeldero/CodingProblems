#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void ReverseString(string& s) {
	reverse(begin(s), end(s));
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int n = s.size();

	string lexMin = "z";
	for (int i = 1; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			string s1 = s.substr(0, i);
			string s2 = s.substr(i, j - i);
			string s3 = s.substr(j, n - j);
			ReverseString(s1);
			ReverseString(s2);
			ReverseString(s3);
			
			string now = s1 + s2 + s3;
			if (now < lexMin) lexMin = now;
		}
	}

	cout << lexMin;

	return 0;
}