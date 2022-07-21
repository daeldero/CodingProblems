#include <iostream>
#include <vector>
#include <string>
using namespace std;
using cnt = vector<int>;

int HammingDistance(const string& s1, const string& s2) {
	int n = s1.size();

	int dist = 0;
	for (int i = 0; i < n; ++i) {
		if (s1[i] != s2[i]) ++dist;
	}
	return dist;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> arr(n);
	for (auto& elt : arr) cin >> elt;

	vector<cnt> cnts(m, cnt(26, 0));
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			++cnts[i][arr[j][i] - 'A'];
		}
	}

	string result = "";
	for (int i = 0; i < m; ++i) {
		int idx = 0;
		for (int j = 0; j < 26; ++j) {
			if (cnts[i][j] > cnts[i][idx]) idx = j;
		}
		result += static_cast<char>(idx + 'A');
	}

	int sum = 0;
	for (const auto& elt : arr) sum += HammingDistance(result, elt);
	cout << result << '\n' << sum;

	return 0;
}