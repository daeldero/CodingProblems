#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vec = vector<ll>;
using mat = vector<vec>;

mat MultiplyMat(const mat& A, const mat& B) {
	int n = A.size();
	auto C = mat(n, vec(n, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				C[i][j] += A[i][k] * B[k][j];
			}
			C[i][j] %= 1000;
		}
	}
	return C;
}

mat PowerMat(const mat& A, ll b) {
	int n = A.size();
	if (b == 1) return A;
	if (b % 2 == 1) return MultiplyMat(A, PowerMat(A, b - 1));
	auto temp = PowerMat(A, b / 2);
	return MultiplyMat(temp, temp);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n, b;
	cin >> n >> b;

	auto A = mat(n, vec(n));
	for (auto& row : A) {
		for (auto& elt : row) cin >> elt;
	}
	A = PowerMat(A, b);

	for (const auto& row : A) {
		for (const auto& elt : row) cout << elt % 1000 << ' ';
		cout << '\n';
	}

	return 0;
}