#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	string s;
	cin >> n >> s;

	int sum = 0;
	for (int i = 0; i < n; ++i) sum += (s[i] - '0');
	cout << sum;
}