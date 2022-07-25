#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> BaseConversion(int n, int b) {
	vector<int> result;
	while (n != 0) {
		result.push_back(n % b);
		n /= b;
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b, m;
	cin >> a >> b >> m;

	vector<int> arr(m);
	for (auto& elt : arr) cin >> elt;

	int n = 0;
	int order = 1;
	for (auto iter = rbegin(arr); iter != rend(arr); ++iter) {
		n += *iter * order;
		order *= a;
	}

	auto result = BaseConversion(n, b);
	for (auto iter = rbegin(result); iter != rend(result); ++iter) {
		cout << *iter << ' ';
	}

	return 0;
}