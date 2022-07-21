#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using pr = pair<string, int>;

vector<string> strings{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

void TransToString(pr& p) {
	int n = p.second;
	string s;
	while (n != 0) {
		s = strings[n % 10];
		s += ' ';
		s.append(p.first);
		p.first = s;
		n /= 10;
	}
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<pr> arr(m - n + 1);
	for (int i = n; i <= m; ++i) {
		arr[i - n].second = i;
		TransToString(arr[i - n]);
	}
	sort(begin(arr), end(arr));

	for (int i = 1; i <= arr.size(); ++i) {
		cout << arr[i - 1].second << ' ';
		if (i % 10 == 0) cout << '\n';
	}

	return 0;
}