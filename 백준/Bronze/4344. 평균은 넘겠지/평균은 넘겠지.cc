#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int C;
	cin >> C;

	for (int c = 0; c < C; ++c) {
		int n;
		cin >> n;
		vector<double> arr(n);
		for (auto& elt : arr) cin >> elt;

		double avg = 0;
		for (const auto& elt : arr) avg += elt;
		avg /= n;

		double cnt = 0;
		for (const auto& elt : arr) {
			if (elt > avg) cnt += 1.0;
		}
		cout.precision(3);
		cout << fixed << cnt / n * 100.0 << "%\n";
	}
}