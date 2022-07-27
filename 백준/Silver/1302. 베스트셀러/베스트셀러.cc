#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	map<string, int> arr;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		if (arr.find(s) == end(arr)) arr[s] = 1;
		else ++arr[s];
	}

	string m = (*begin(arr)).first;
	for (const auto& elt : arr) {
		if (elt.second > arr[m]) m = elt.first;
	}
	cout << m;

	return 0;
}