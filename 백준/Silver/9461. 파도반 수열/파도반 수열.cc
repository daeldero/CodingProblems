#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<long long> arr(100, 1);
	arr[3] = 2;
	arr[4] = 2;
	for (int i = 5; i < 100; ++i) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}

	for (int t = 0; t < T; ++t) {
		int N;
		cin >> N;
		cout << arr[N - 1] << '\n';
	}

	return 0;
}