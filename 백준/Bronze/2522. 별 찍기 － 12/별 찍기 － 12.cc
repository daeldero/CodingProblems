#include <iostream>
using namespace std;

void Print(int i, int n) {
	for (int j = 0; j < n - i; ++j) cout << ' ';
	for (int j = 0; j < i; ++j) cout << '*';
	cout << '\n';
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) Print(i, n);
	for (int i = n - 1; i >= 1; --i) Print(i, n);

	return 0;
}