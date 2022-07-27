#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int h, w;
	cin >> h >> w;

	vector<string> arr(h);
	for (auto& s : arr) cin >> s;

	vector<vector<int>> result(h, vector<int>(w, -1));
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (arr[i][j] == '.') {
				for (int k = j - 1; k >= 0; --k) {
					if (arr[i][k] == 'c') {
						result[i][j] = j - k;
						break;
					}
				}
			}
			else result[i][j] = 0;
		}
	}

	for (const auto& row : result) {
		for (const auto& elt : row) cout << elt << ' ';
		cout << '\n';
	}

	return 0;
}