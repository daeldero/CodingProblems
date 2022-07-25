#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Counting(const string& s, char d) {
	int cnt = 0;
	for (const auto& c : s) {
		if (c == d) ++cnt;
	}
	return cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	char d;
	cin >> n >> d;
	
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		string s = to_string(i);
		cnt += Counting(s, d);
	}
	cout << cnt;

	return 0;
}