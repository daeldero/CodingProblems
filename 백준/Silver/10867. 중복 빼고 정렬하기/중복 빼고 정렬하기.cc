#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<bool> arr(2001, false);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		arr[x + 1000] = true;
	}

	for (int i = 0; i < 2001; ++i) {
		if (arr[i]) cout << i - 1000 << ' ';
	}
}