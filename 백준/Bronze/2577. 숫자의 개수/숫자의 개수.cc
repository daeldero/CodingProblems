#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	int x = a * b * c;
	vector<int> arr(10, 0);
	while (x != 0) {
		++arr[x % 10];
		x /= 10;
	}
	for (const auto& elt : arr) cout << elt << '\n';
}