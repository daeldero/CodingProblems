#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> arr(5);
	for (auto& elt : arr) cin >> elt;

	int minLcm = 1000000000;
	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			for (int k = j + 1; k < 5; ++k) {
				int temp = lcm(lcm(arr[i], arr[j]), arr[k]);
				if (temp < minLcm) minLcm = temp;
			}
		}
	}
	cout << minLcm;

	return 0;
}