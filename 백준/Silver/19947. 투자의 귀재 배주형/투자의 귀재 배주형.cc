#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int h;
	int y;
	cin >> h >> y;

	double a = 1.05;
	double b = 1.2;
	double c = 1.35;

	vector<int> arr(y + 1);
	arr[0] = h;
	for (int i = 1; i <= y; ++i) {
		if (i >= 5) {
			arr[i] = static_cast<double>(max(arr[i - 5] * c, max(arr[i - 3] * b, arr[i - 1] * a)));
		}
		else if (i >= 3) {
			arr[i] = static_cast<double>(max(arr[i - 3] * b, arr[i - 1] * a));
		}
		else {
			arr[i] = arr[i - 1] * a;
		}
	}

	cout << arr.back();

	return 0;
}