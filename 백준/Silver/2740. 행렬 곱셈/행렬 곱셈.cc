#include <iostream>
#include <vector>
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m, k;
	
	cin >> n >> m;
	mat a(n, vec(m));
	for (auto& row : a) {
		for (auto& elt : row) cin >> elt;
	}

	cin >> m >> k;
	mat b(m, vec(k));
	for (auto& row : b) {
		for (auto& elt : row) cin >> elt;
	}

	mat c(n, vec(k, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			for (int l = 0; l < m; ++l) c[i][j] += a[i][l] * b[l][j];
		}
	}

	for (const auto& row : c) {
		for (const auto& elt : row) cout << elt << ' ';
		cout << '\n';
	}

	return 0;
}