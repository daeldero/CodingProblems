#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double ComputeAverage(const vector<int>& arr) {
	int n = arr.size();
	double sum = 0;
	for (const auto& elt : arr) sum += elt;
	return sum / n;
}

int ComputeMedian(const vector<int>& sorted) {
	return sorted[sorted.size() / 2];
}

int ComputeMode(const vector<int>& sorted) {
	vector<int> cnt(8001, 0);
	for (const auto& elt : sorted) ++cnt[elt + 4000];

	auto maxIter = max_element(begin(cnt), end(cnt));
	bool repeated = false;
	for (int i = 0; i < 8001; ++i) {
		if (cnt[i] == *maxIter) {
			if (repeated) return i - 4000;
			repeated = true;
		}
	}
	return (maxIter - begin(cnt)) - 4000;
}

int ComputeRange(const vector<int>& sorted) {
	return sorted.back() - sorted.front();
}


int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto& elt : arr) cin >> elt;
	sort(begin(arr), end(arr));

	double avg = ComputeAverage(arr);
	if (avg > -0.5 && avg < 0.5) avg = 0.0;
	cout.precision(0);
	cout << fixed << avg << '\n';
	cout << ComputeMedian(arr) << '\n' << ComputeMode(arr) << '\n' << ComputeRange(arr);

	return 0;
}