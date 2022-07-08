#include <iostream>
#include <vector>
#include <string>
using namespace std;

int reverse(const string& s) {
	int result = 0;
	
	int n = s.size();
	result = s[n - 1] - '0';
	for (int i = n - 2; i >= 0; --i) {
		result *= 10;
		result += (s[i] - '0');
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;
	
	int a = reverse(s1);
	int b = reverse(s2);
	cout << ((a > b) ? a : b);

	return 0;
}