#include <iostream>
#include <set>
using namespace std;

void SetSet(set<int>& s, int size) {
	for (int i = 0; i < size; ++i) {
		int n;
		cin >> n;
		s.insert(n);
	}
}

set<int> SetDifference(const set<int>& s1, const set<int>& s2) {
	set<int> result(s1);
	for (auto i = begin(s2); i != end(s2); ++i) {
		if (s1.find(*i) != end(s1)) result.erase(*i);
	}
	return result;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	set<int> A, B;
	SetSet(A, a);
	SetSet(B, b);

	auto AB = SetDifference(A, B);
	auto BA = SetDifference(B, A);
	cout << AB.size() + BA.size();

	return 0;
}