#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int a, b;
		char c;
		cin >> a >> c >> b;
		cout << a + b << '\n';
	}
	
	return 0;
}