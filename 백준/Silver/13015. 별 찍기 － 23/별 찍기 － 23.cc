#include <iostream>
using namespace std;

void PrintEnd(int n) {
	for (int i = 0; i < n; ++i) cout << '*';
	for (int i = 0; i < 2 * n - 3; ++i) cout << ' ';
	for (int i = 0; i < n; ++i) cout << '*';
	cout << '\n';
}

void PrintMidStar(int n) {
	cout << '*';
	for (int i = 0; i < n - 2; ++i) cout << ' ';
	cout << '*';
}

void PrintMid(int i, int n) {
	for (int j = 0; j < i; ++j) cout << ' ';
	PrintMidStar(n);
	for (int j = 0; j < 2 * (n - i) - 3; ++j) cout << ' ';
	PrintMidStar(n);
	cout << '\n';
}

void PrintCenter(int n) {
	for (int i = 0; i < n - 1; ++i) cout << ' ';
	cout << '*';
	for (int i = 0; i < n - 2; ++i) cout << ' ';
	cout << '*';
	for (int i = 0; i < n - 2; ++i) cout << ' ';
	cout << "*\n";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	PrintEnd(n);
	for (int i = 1; i < n - 1; ++i) PrintMid(i, n);
	PrintCenter(n);
	for (int i = n - 2; i > 0; --i) PrintMid(i, n);
	PrintEnd(n);

	return 0;
}