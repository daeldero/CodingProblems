#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int l;
	cin >> l;

	string s;
	cin >> s;

	ll r = 31;
	ll m = 1234567891;

	ll result = 0;
	ll mult = 1;
	for (int i = 0; i < l; ++i) {
		result += (s[i] - 'a' + 1) * mult;
		result %= m;
		mult *= r;
		mult %= m;
	}
	cout << result;

	return 0;
}