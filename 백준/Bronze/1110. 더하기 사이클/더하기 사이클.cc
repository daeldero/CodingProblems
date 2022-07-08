#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int x = (n % 10) * 10 + (n / 10 + n % 10) % 10;
	int length = 1;
	while (n != x) {
		x = (x % 10) * 10 + (x / 10 + x % 10) % 10;
		++length;
	}
	cout << length;
}