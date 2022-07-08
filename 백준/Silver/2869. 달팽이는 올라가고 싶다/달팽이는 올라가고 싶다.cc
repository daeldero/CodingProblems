#include <iostream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b, v;
	cin >> a >> b >> v;

	int mpd = a - b;
	int rem = v - a;
	if (rem % mpd != 0) cout << rem / mpd + 2;
	else cout << rem / mpd + 1;
}