#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;

	stack<int> arr;
	for (int i = 0; i < k; ++i) {
		int n;
		cin >> n;
		if (n == 0) arr.pop();
		else arr.push(n);
	}

	int sum = 0;
	while (!arr.empty()) {
		sum += arr.top();
		arr.pop();
	}
	cout << sum;

	return 0;
}