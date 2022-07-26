#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool HasSameVertices(const vector<string>& arr, int i, int j, int sz) {
	return (arr[i][j] == arr[i][j + sz - 1] &&
			arr[i][j] == arr[i + sz - 1][j] &&
			arr[i][j] == arr[i + sz - 1][j + sz - 1]);
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> arr(n);
	for (auto& s : arr) cin >> s;

	for (int sz = min(n, m); sz >= 1; --sz) {
		for (int i = 0; i <= n - sz; ++i) {
			for (int j = 0; j <= m - sz; ++j) {
				if (HasSameVertices(arr, i, j, sz)) {
					cout << sz * sz;
					return 0;
				}
			}
		}
	}

	return 0;
}