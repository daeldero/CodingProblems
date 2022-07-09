#include <iostream>
#include <vector>
using namespace std;

struct FiboVector {
	int a0{ 0 };
	int a1{ 0 };

	FiboVector operator+(const FiboVector& other) {
		FiboVector result;
		result.a0 = this->a0 + other.a0;
		result.a1 = this->a1 + other.a1;
		return result;
	}
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
		
		if (n == 0) {
			cout << 1 << ' ' << 0 << '\n';
			continue;
		}

		vector<FiboVector> arr(n + 1, { 0, 0 });
		arr[0].a0 = 1;
		arr[1].a1 = 1;
		for (int i = 2; i <= n; ++i) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		cout << arr.back().a0 << ' ' << arr.back().a1 << '\n';
	}

	return 0;
}