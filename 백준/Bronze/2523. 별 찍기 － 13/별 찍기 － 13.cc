#include <iostream>
using namespace std;

void Print(int n) {
	for (int i = 0; i < n; ++i) cout << '*';
	cout << '\n';
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) Print(i);
	for (int i = n - 1; i >= 1; --i) Print(i);

	return 0;
}