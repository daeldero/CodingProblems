#include <iostream>
#include <vector>
using namespace std;

void SetApartment(vector<vector<int>>& arr) {
	for (int b = 1; b < 15; ++b) arr[0][b] = b;

	for (int a = 1; a < 15; ++a) {
		int sum = 0;
		for (int b = 1; b < 15; ++b) {
			sum += arr[a - 1][b];
			arr[a][b] = sum;
		}
	}
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<vector<int>> arr(15, vector<int>(15, 0));
	SetApartment(arr);

	for (int t = 0; t < T; ++t) {
		int k, n;
		cin >> k >> n;
		cout << arr[k][n] << '\n';
	}
}