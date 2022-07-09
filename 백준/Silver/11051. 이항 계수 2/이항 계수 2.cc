#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vec = vector<ll>;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<vec> coef(n + 1, vec(n + 1, 0));
	for (int i = 0; i <= n; ++i) {
		coef[i][0] = 1;
		coef[i][i] = 1;
	}

	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i; ++j) {
			coef[i][j] = coef[i - 1][j] + coef[i - 1][j - 1];
			coef[i][j] %= 10007;
		}
	}

	cout << coef[n][k];

	return 0;
}