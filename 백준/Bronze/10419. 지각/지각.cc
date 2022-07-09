#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int d;
		cin >> d;
		
		int mt = 1;
		while (mt * mt + mt <= d) ++mt;
		cout << mt - 1 << '\n';
	}

	return 0;
}