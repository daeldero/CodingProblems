#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<string> arr(n);
	for (auto& s : arr) cin >> s;

	set<string> result;
	if (k == 2) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i == j) continue;
				result.insert(arr[i] + arr[j]);
			}
		}
	}
	else if (k == 3) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i == j) continue;
				for (int l = 0; l < n; ++l) {
					if (i == l || j == l) continue;
					result.insert(arr[i] + arr[j] + arr[l]);
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i == j) continue;
				for (int l = 0; l < n; ++l) {
					if (i == l || j == l) continue;
					for (int m = 0; m < n; ++m) {
						if (i == m || j == m || l == m) continue;
						result.insert(arr[i] + arr[j] + arr[l] + arr[m]);
					}
				}
			}
		}
	}
	cout << result.size();

	return 0;
}