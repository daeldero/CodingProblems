#include <iostream>
#include <string>
using namespace std;

int DigitSum(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	int num = 0;
	for (const auto& c : s) num += (c - '0');

	int cnt = 1;
	while (num > 9) {
		num = DigitSum(num);
		++cnt;
	}

	if (s.size() == 1) cout << 0 << '\n';
	else cout << cnt << '\n';

	if (num % 3 == 0) cout << "YES";
	else cout << "NO";

	return 0;
}