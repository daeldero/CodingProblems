#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int M;
	cin >> M;
	
	vector<bool> arr(21, false);
	for (int m = 0; m < M; ++m) {
		string s;
		cin >> s;

		if (s == "add") {
			int x;	cin >> x;
			arr[x] = true;
		}
		if (s == "remove") {
			int x;	cin >> x;
			arr[x] = false;
		}
		if (s == "check") {
			int x;	cin >> x;
			cout << arr[x] << '\n';
		}
		if (s == "toggle") {
			int x;	cin >> x;
			arr[x] = !arr[x];
		}
		if (s == "all") {
			for (int i = 1; i <= 20; ++i) arr[i] = true;
		}
		if (s == "empty") {
			for (int i = 1; i <= 20; ++i) arr[i] = false;
		}
	}

	return 0;
}