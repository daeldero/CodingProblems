#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int result = 1;
	for (int i = n; i > 1; --i) result *= i;
	cout << result;
}