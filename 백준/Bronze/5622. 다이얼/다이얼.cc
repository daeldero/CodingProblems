#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	int sum = 0;
	for (const auto& c : s) {
		int n = c - 'A';
		sum += 2;
		if (n < 3) sum += 1;
		else if (n < 6) sum += 2;
		else if (n < 9) sum += 3;
		else if (n < 12) sum += 4;
		else if (n < 15) sum += 5;
		else if (n < 19) sum += 6;
		else if (n < 22) sum += 7;
		else sum += 8;
	}
	cout << sum;

	return 0;
}