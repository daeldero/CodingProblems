#include <iostream>
#include <vector>
using namespace std;
using v = vector<int>;
using vv = vector<v>;

vector<vv> arr(21, vv(21, v(21, 1)));

void ComputeWValues() {
	for (int i = 1; i < 21; ++i) {
		for (int j = 1; j < 21; ++j) {
			for (int k = 1; k < 21; ++k) {
				if (i < j && j < k) arr[i][j][k] = arr[i][j][k - 1] + arr[i][j - 1][k - 1] - arr[i][j - 1][k - 1];
				else arr[i][j][k] = arr[i - 1][j][k] + arr[i - 1][j - 1][k] + arr[i - 1][j][k - 1] - arr[i - 1][j - 1][k - 1];
			}
		}
	}
}

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return arr[20][20][20];
	return arr[a][b][c];
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ComputeWValues();

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}

	return 0;
}