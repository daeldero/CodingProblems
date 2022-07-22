#include <iostream>
#include <set>
using namespace std;

int Abs(int n) {
	return n > 0 ? n : -n;
}

template<typename T>
struct AbsLess {
	const bool operator()(const T& a, const T& b) const {
		int aa = Abs(a);
		int bb = Abs(b);
		if (aa == bb) return a < b;
		return aa < bb;
	}
};

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	multiset<int, AbsLess<int>> arr;
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