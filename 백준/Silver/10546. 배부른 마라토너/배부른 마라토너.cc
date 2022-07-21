#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	multiset<string> arr;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		arr.insert(s);
	}

	for (int i = 0; i < n - 1; ++i) {
		string s;
		cin >> s;
		auto iter = arr.find(s);
		arr.erase(iter);
	}
	cout << *begin(arr);

	return 0;
}