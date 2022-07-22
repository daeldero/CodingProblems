#include <iostream>
#include <set>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	multiset<int> arr;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x == 0) {
			if (arr.empty()) cout << "0\n";
			else {
				cout << *begin(arr) << '\n';
				arr.erase(begin(arr));
			}
		}
		else arr.insert(x);
	}

	return 0;
}