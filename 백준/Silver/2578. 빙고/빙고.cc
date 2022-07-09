#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;

void DeleteNumber(mat& arr, int num) {
	for (auto& row : arr) {
		for (auto& elt : row) {
			if (elt == num) elt = 0;
		}
	}
}

bool CheckBingo(const mat& arr) {
	int cnt = 0;

	int temp = 0;
	for (const auto& row : arr) {
		temp = 0;
		for (const auto& elt : row) temp += (elt == 0);
		if (temp == 5) ++cnt;
	}

	for (int j = 0; j < 5; ++j) {
		temp = 0;
		for (int i = 0; i < 5; ++i) temp += (arr[i][j] == 0);
		if (temp == 5) ++cnt;
	}

	temp = 0;
	for (int i = 0; i < 5; ++i) temp += (arr[i][i] == 0);
	if (temp == 5) ++cnt;

	temp = 0;
	for (int i = 0; i < 5; ++i) temp += (arr[4 - i][i] == 0);
	if (temp == 5) ++cnt;

	return (cnt >= 3);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	mat arr(5, vec(5));
	for (auto& row : arr) for (auto& elt : row) cin >> elt;

	int idx = -1;
	for (int i = 1; i <= 25; ++i) {
		int n;
		cin >> n;
		DeleteNumber(arr, n);
		if (idx == -1 && CheckBingo(arr)) idx = i;
	}

	cout << idx;

	return 0;
}