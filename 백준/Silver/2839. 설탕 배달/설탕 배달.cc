#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int cnt = n / 5;
	if (n == 1 || n == 2 || n == 4 || n == 7) cnt = -1;
	else {
		int rem = n % 5;
		
		switch (rem) {
		case 1: // 6 = 1 + 5 * 1 = 3 * 2
			++cnt;
			break;
		case 2: // 12 = 2 + 5 * 2 = 3 * 4
			cnt += 2;
			break;
		case 3:
			++cnt;
			break;
		case 4: // 9 = 4 + 5 = 3 * 3
			cnt += 2;
			break;
		}
	}

	cout << cnt;
	return 0;
}