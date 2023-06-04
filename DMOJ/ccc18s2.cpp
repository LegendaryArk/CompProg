#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	vector<vector<int>> grid(N, vector<int>(N)), rg(N, vector<int>(N));
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++) {
			int h; cin >> h;
			grid[x][y] = h;
		}
	}

	rg = grid;

	int x = 0, y = 0;
	while (true) {
		if (grid[x][y] > grid[x+1][y]) {
			for (int r = 0; r < N; r++) {
				for (int c = N - 1; c >= 0; c--) {
					rg[x][y] = grid[r][c];
					x++;
				}
				y++;
			}
		} else if (grid[x][y] > grid[x][y+1]) {
			for (int r = N - 1; r >= 0; r--) {
				for (int c = 0; c < N; c++) {
					rg[x][y] = grid[r][c];
					x++;
				}
				y++;
			}
		}

		if (rg[0][0] < rg[0][1] && rg[0][0] < rg[1][0]) break;
		grid = rg;
	}

	for (int r = 0; r < N; r++) {
		for (int c = 0; c < N; c++) {
			cout << rg[r][c] << " ";
		}
		cout << "\n";
	}
}