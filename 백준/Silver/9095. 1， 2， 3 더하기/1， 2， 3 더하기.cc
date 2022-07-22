#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<int> cases(T);
	for (auto& n : cases) cin >> n;
	int m = *max_element(begin(cases), end(cases));

	vector<int> arr(m + 1, 0);
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= m; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (const auto& n : cases) {
		cout << arr[n] << '\n';
	}

	return 0;
}