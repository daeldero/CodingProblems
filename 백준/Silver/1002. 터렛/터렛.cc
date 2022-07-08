#include <iostream>
#include <vector>
using namespace std;

int CountIntersection(const vector<int>& c1, const vector<int>& c2) {
	int dx = c1[0] - c2[0];
	int dy = c1[1] - c2[1];
	int dr = c1[2] - c2[2];
	int ar = c1[2] + c2[2];

	int distSqr = dx * dx + dy * dy;
	if (distSqr == 0 && dr == 0) return -1;
	if (distSqr == dr * dr || distSqr == ar * ar) return 1;
	if (distSqr < dr * dr || distSqr > ar * ar) return 0;
	return 2;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		vector<int> c1(3), c2(3);
		for (auto& v : c1) cin >> v;
		for (auto& v : c2) cin >> v;
		cout << CountIntersection(c1, c2) << '\n';
	}

	return 0;
}