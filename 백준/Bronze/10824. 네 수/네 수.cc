#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string a, b, c, d;
	cin >> a >> b >> c >> d;
	
	long long ab, cd;
	ab = stoll(a + b);
	cd = stoll(c + d);
	
	cout << ab + cd;

	return 0;
}