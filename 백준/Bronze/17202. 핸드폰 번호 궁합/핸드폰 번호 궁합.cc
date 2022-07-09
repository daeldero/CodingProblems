#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> TransToNumArr(const string& s1, const string& s2) {
	vector<int> arr(16);
	for (int i = 0; i < 8; ++i) {
		arr[2 * i] = s1[i] - '0';
		arr[2 * i + 1] = s2[i] - '0';
	}
	return arr;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;

	auto num = TransToNumArr(s1, s2);
	int n = num.size();
	for (int j = 0; j < n - 2; ++j) {
		for (int i = 0; i < n - 1 - j; ++i) num[i] = (num[i] + num[i + 1]) % 10;
	}
	cout << num[0] << num[1];

	return 0;
}