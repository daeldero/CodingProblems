#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int prev = 1;
	int now = 1;
	int next = 1;
	for (int i = 3; i <= n; ++i) {
		next = now + prev;
		prev = now;
		now = next;
	}
	cout << next << ' ' << n - 2;

	return 0;
}