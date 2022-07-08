#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(5);
	for (auto& elt : arr) cin >> elt;

	int result = 0;
	for (const auto& elt : arr) result += elt * elt;
	cout << result % 10;

	return 0;
}