#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	double score = 0;
	if (s.size() != 1) {
		score = 'E' - s[0];
		if (s[1] == '+') score += 0.3;
		if (s[1] == '-') score -= 0.3;
	}

	cout.precision(1);
	cout << fixed << score;


	return 0;
}