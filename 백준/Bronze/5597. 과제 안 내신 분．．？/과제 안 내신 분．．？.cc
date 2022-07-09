#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<bool> arr(30, false);

	for (int i = 0; i < 28; ++i) {
		int n;
		cin >> n;
		arr[n - 1] = true;
	}

	for (int i = 0; i < 30; ++i) {
		if (!arr[i]) cout << i + 1 << '\n';
	}

	return 0;
}