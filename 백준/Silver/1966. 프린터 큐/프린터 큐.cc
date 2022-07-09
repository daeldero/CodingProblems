#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		deque<pair<int, int>> arr(n);
		for (int i = 0; i < n; ++i) {
			int priority;
			cin >> priority;
			arr[i] = { priority, i };
		}

		int cnt = 0;
		while (true) {
			int highest = (*max_element(begin(arr), end(arr))).first;
			if (arr.front().first == highest) {
				if (arr.front().second == m) break;
				arr.pop_front();
				++cnt;
			}
			else {
				arr.push_back(arr.front());
				arr.pop_front();
			}
		}
		cout << cnt + 1 << '\n';
	}

	return 0;
}