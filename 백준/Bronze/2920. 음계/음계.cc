#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(8);
	for (auto& elt : arr) cin >> elt;

	int diff = arr[1] - arr[0];
	if (diff == 1) {
		for (int i = 1; i < 8; ++i) {
			if (arr[i] - arr[i - 1] != 1) {
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
	}
	else if (diff == -1) {
		for (int i = 1; i < 8; ++i) {
			if (arr[i] - arr[i - 1] != -1) {
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
	}
	else cout << "mixed";


	return 0;
}