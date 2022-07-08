#include <iostream>
#include <vector>
using namespace std;

void PrintDifferent(const vector<int>& arr) {
	if (arr[0] == arr[1]) cout << arr[2];
	else if (arr[0] == arr[2]) cout << arr[1];
	else cout << arr[0];
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> x(3);
	vector<int> y(3);

	for (int i = 0; i < 3; ++i) cin >> x[i] >> y[i];

	PrintDifferent(x);
	cout << ' ';
	PrintDifferent(y);

	return 0;
}