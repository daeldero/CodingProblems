#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr1(9);
	for (auto& elt : arr1) cin >> elt;

	vector<int> arr2(9);
	for (auto& elt : arr2) cin >> elt;

	int sum1 = 0;
	int sum2 = 0;

	bool win = false;
	for (int i = 0; i < 9; ++i) {
		sum1 += arr1[i];
		if (sum1 > sum2) win = true;
		sum2 += arr2[i];
		if (sum1 > sum2) win = true;
	}
	if (win) cout << "Yes";
	else cout << "No";

	return 0;
}