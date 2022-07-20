#include <iostream>
#include <vector>
#include <string>
using namespace std;

int diff(char c1, char c2) {
	return (c1 - c2 > 0 ? c1 - c2 : c2 - c1);
}

bool IsNext(const string& now, const string& next) {
	bool to = (diff(now[0], next[0]) == 2) && (diff(now[1], next[1]) == 1);
	bool ot = (diff(now[0], next[0]) == 1) && (diff(now[1], next[1]) == 2);
	return to || ot;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<vector<bool>> arr(6, vector<bool>(6, false));
	string start;
	cin >> start;
	arr[start[0] - 'A'][start[1] - '1'] = true;

	bool is_valid = true;
	string now = start;
	for (int i = 0; i < 35; ++i) {
		string next;
		cin >> next;
		if (!IsNext(now, next)) is_valid = false;
		if (arr[next[0] - 'A'][next[1] - '1']) is_valid = false;
		arr[next[0] - 'A'][next[1] - '1'] = true;
		now = next;
	}
	
	if (is_valid && IsNext(now, start)) cout << "Valid";
	else cout << "Invalid";

	return 0;
}