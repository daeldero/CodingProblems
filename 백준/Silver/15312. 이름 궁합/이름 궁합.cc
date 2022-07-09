#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> cnt{ 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
	
	string a, b;
	cin >> a >> b;
	int n = a.size();

	vector<int> arr(2 * n);
	for (int i = 0; i < n; ++i) {
		arr[2 * i] = cnt[a[i] - 'A'];
		arr[2 * i + 1] = cnt[b[i] - 'A'];
	}
	n *= 2;

	for (int j = 0; j < n - 2; ++j) {
		for (int i = 0; i < n - 1 - j; ++i) arr[i] = (arr[i] + arr[i + 1]) % 10;
	}
	cout << arr[0] << arr[1];

	return 0;
}