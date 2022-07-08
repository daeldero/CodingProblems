#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<double> arr(n);
	for (auto& elt : arr) cin >> elt;
	double m = *max_element(arr.begin(), arr.end());

	double sum = 0;
	for (const auto& elt : arr) sum += elt;
	cout.precision(2);
	cout << fixed << sum / n / m * 100;
}