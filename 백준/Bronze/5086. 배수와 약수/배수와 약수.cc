#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;

		if (a > b && a % b == 0) cout << "multiple\n";
		else if (a < b && b % a == 0) cout << "factor\n";
		else cout << "neither\n";
	}


	return 0;
}