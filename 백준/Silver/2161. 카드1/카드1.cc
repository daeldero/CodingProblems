#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	deque<int> arr(n);
	for (int i = 0; i < n; ++i) arr[i] = i + 1;

	while (true) {
		cout << arr.front() << ' ';
		arr.pop_front();
		if (arr.empty()) break;
		arr.push_back(arr.front());
		arr.pop_front();
	}

	return 0;
}