#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student { int d, m, y; string s; };

bool compare(const Student& s1, const Student& s2) {
	if (s1.y == s2.y) {
		if (s1.m == s2.m) return s1.d < s2.d;
		return s1.m < s2.m;
	}
	return s1.y < s2.y;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<Student> arr(n);
	for (auto& elt : arr) cin >> elt.s >> elt.d >> elt.m >> elt.y;
	sort(begin(arr), end(arr), compare);

	cout << arr.back().s << '\n' << arr.front().s;

	return 0;
}