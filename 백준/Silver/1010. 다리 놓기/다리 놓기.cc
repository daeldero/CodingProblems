#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<vector<long long>> arr(31, vector<long long>(31, 0));
	for (int i = 1; i <= 30; ++i) {
		arr[i][i] = 1;
		arr[1][i] = i;
	}

	for (int i = 2; i <= 30; ++i) {
		for (int j = i + 1; j <= 30; ++j) {
			for (int k = i - 1; k <= j - 1; ++k) arr[i][j] += arr[i - 1][k];
		}
	}
	
	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;
		cout << arr[n][m] << '\n';
	}

	return 0;
}