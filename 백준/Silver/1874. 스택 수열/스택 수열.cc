#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> seq(n);
	for (auto& elt : seq) cin >> elt;

	stack<int> arr;
	string result;
	int now = 1;
	for (const auto& elt : seq) {
		while (arr.empty() || arr.top() < elt) {
			arr.push(now++);
			result.push_back('+');
			result.push_back('\n');
		}
		if (arr.top() == elt) {
			arr.pop();
			result.push_back('-');
			result.push_back('\n');
		}
		else {
			result = "NO";
			break;
		}
	}
	cout << result;

	return 0;
}