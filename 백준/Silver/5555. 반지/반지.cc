#include <iostream>
#include <string>
using namespace std;

string GetRotationalSubstring(const string& s, int i_beg, int size) {
	string sub;
	for (int i = 0; i < size; ++i) {
		sub += s[(i + i_beg) % 10];
	}
	return sub;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	int n;
	cin >> s >> n;
	int sz = s.size();

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		string ring;
		cin >> ring;

		for (int j = 0; j < 10; ++j) {
			if (s == GetRotationalSubstring(ring, j, sz)) {
				++cnt;
				break;
			}
		}
	}
	cout << cnt;

	return 0;
}