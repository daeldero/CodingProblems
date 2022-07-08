#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	map<string, string> arr;
	for (int i = 0; i < n; ++i) {
		string address, password;
		cin >> address >> password;
		arr[address] = password;
	}

	for (int i = 0; i < m; ++i) {
		string address;
		cin >> address;
		cout << arr[address] << '\n';
	}

	return 0;
}