#include <bits/stdc++.h>
using namespace std;

const int MM = 105;
int R, C, mp[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) cin >> mp[i][j];
	}

	int mx = 0;
	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			if (mp[r][c] <= mx) continue;

			bool isGood = false;
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					if (i == 0 && j == 0) continue;
					if (mp[r + i][c + j] == mp[r][c]) isGood = true;
				}
			}
			if (isGood) mx = max(mx, mp[r][c]);
		}
	}
	cout << mx << "\n";

	return 0;
}