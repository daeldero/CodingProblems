#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(10);
	
	int w = 0;
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));
	for (int i = 7; i < 10; ++i) w += arr[i];

	int k = 0;
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));
	for (int i = 7; i < 10; ++i) k += arr[i];

	cout << w << ' ' << k;


	return 0;
}