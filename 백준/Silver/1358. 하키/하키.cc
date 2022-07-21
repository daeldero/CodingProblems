#include <iostream>
#include <vector>
using namespace std;

int w, h, x, y, p, r;
int px, py;

bool InRect() {
	bool x_in = (px >= x) && (px <= x + w);
	bool y_in = (py >= y) && (py <= y + h);
	return x_in && y_in;
}

bool InLeft() {
	int dx = px - x;
	int dy = py - y - r;
	return (dx * dx + dy * dy <= r * r);
}

bool InRight() {
	int dx = px - x - w;
	int dy = py - y - r;
	return (dx * dx + dy * dy <= r * r);
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> w >> h >> x >> y >> p;
	r = h / 2;

	int cnt = 0;
	for (int i = 0; i < p; ++i) {
		cin >> px >> py;
		if (InRect() || InLeft() || InRight()) ++cnt;
	}
	cout << cnt;

	return 0;
}