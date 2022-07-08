#include <iostream>
#include <vector>
using namespace std;

int d(int n) {
	int result = n;
	while (n != 0) {
		result += (n % 10);
		n /= 10;
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<bool> arr(10001, true);
	for (int i = 1; i <= 10000; ++i) {
		int generated = d(i);
		if (generated <= 10000) arr[generated] = false;
	}
	for (int i = 1; i <= 10000; ++i) {
		if (arr[i]) cout << i << '\n';
	}
}