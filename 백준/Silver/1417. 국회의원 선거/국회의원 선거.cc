#include <iostream>
#include <set>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int d;
	cin >> d;

	if (n == 1) {
		cout << 0;
		return 0;
	}

	multiset<int, greater<int>> arr;
	for (int i = 0; i < n - 1; ++i) {
		int x;
		cin >> x;
		arr.insert(x);
	}

	int cnt = 0;
	while (d <= *begin(arr)) {
		++d;
		int x = *begin(arr) - 1;
		arr.erase(begin(arr));
		arr.insert(x);
		++cnt;
	}
	cout << cnt;

	return 0;
}