#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CountBoard(vector<string>& board, int x, int y) {
	int wbCnt = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if ((i + j) % 2 == 0) wbCnt += (board[x + i][y + j] == 'B');
			else wbCnt += (board[x + i][y + j] == 'W');
		}
	}

	int bwCnt = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if ((i + j) % 2 == 0) bwCnt += (board[x + i][y + j] == 'W');
			else bwCnt += (board[x + i][y + j] == 'B');
		}
	}

	if (wbCnt < bwCnt) return wbCnt;
	else return bwCnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> board(n);
	for (auto& row : board) cin >> row;
	
	int minCnt = n * m;
	for (int i = 0; i <= n - 8; ++i) {
		for (int j = 0; j <= m - 8; ++j) {
			int cnt = CountBoard(board, i, j);
			if (cnt < minCnt) minCnt = cnt;
		}
	}
	cout << minCnt;

	return 0;
}