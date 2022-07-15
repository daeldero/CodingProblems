#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	bool isDescending = true;
	for (int i = 0; i < m; ++i) {
		int k;
		cin >> k;
		
		vector<int> dummy(k);
		for (auto& elt : dummy) cin >> elt;
		if (isDescending) {
			for (int j = 0; j < k - 1; ++j) {
				if (dummy[j + 1] > dummy[j]) {
					isDescending = false;
					break;
				}
			}
		}
	}

	if (isDescending) cout << "Yes";
	else cout << "No";

	return 0;
}