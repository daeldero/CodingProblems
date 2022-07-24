#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;

	int dir;
	vector<int> arr(6);
	for (auto& elt : arr) {
		cin >> dir >> elt;
	}

	int large1 = 0, large2 = 1;
	for (int i = 0; i < 3; ++i) {
		if (arr[2 * i] > arr[large1]) large1 = 2 * i;
		if (arr[2 * i + 1] > arr[large2]) large2 = 2 * i + 1;
	}

	int small1, small2;
	if ((large1 + 1) % 6 == large2) {
		small1 = (large1 + 3) % 6;
		small2 = (large1 + 4) % 6;
	}
	else {
		small1 = (large2 + 3) % 6;
		small2 = (large2 + 4) % 6;
	}

	cout << (arr[large1] * arr[large2] - arr[small1] * arr[small2]) * k;

	return 0;
}