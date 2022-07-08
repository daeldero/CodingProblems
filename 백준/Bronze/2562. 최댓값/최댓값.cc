#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(9);
	for (auto& elt : arr) cin >> elt;
	
	auto maxIter = max_element(arr.begin(), arr.end());
	cout << *maxIter << '\n' << maxIter - arr.begin() + 1;
}