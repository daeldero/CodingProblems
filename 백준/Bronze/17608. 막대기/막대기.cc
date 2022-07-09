#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> height(n);
	for (auto& h : height) cin >> h;

	int cnt = 1;
	int maxH = height.back();
	for (int i = n; i > 0; --i) {
		if (height[i - 1] > maxH) {
			maxH = height[i - 1];
			++cnt;
		}
	}
	cout << cnt;

	return 0;
}