#include <iostream>
#include <vector>
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;

mat SetMat(int n, int m) {
	auto a = mat(n, vec(m));
	for (auto& row : a) {
		for (auto& elt : row) cin >> elt;
	}
	return a;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	auto a = SetMat(n, m);
	auto b = SetMat(n, m);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) a[i][j] += b[i][j];
	}

	for (const auto& row : a) {
		for (const auto& elt : row) cout << elt << ' ';
		cout << '\n';
	}

	return 0;
}