#include <bits/stdc++.h>
using namespace std;

const int MM = 2000;
int N, M, R, C;
char mp[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> R >> C;
	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= M; c++) {
			mp[r][c] = 'a';
		}
	}
	for (int c = 1; c <= C; c++) {
		for (int r = 1; r <= N; r++) {
			mp[r][c] = 'a';
		}
	}
	for (int r = R + 1; r <= N; r++) {
		for (int c = C + 1; c <= M; c++) {
			mp[r][c] = 'b';
		}
	}
	if (R == 0) mp[0][M] = 'c';
	if (C == 0) mp[C][N] = 'c';

	int row = N, col = M;
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c < M / 2; c++) {
			if (mp[r][c] != mp[r][M - c + 1]) row--;
		}
	}
	for (int c = 1; c <= M; c++) {
		for (int r = 1; r < N / 2; r++) {
			if (mp[r][c] != mp[N - r + 1][c]) col--;
		}
	}
	if (row != R || col != C) cout << "IMPOSSIBLE\n";
	else {
		for (int r = 1; r <= N; r++) {
			for (int c = 1; c <= M; c++) {
				cout << mp[r][c];
			}
			cout << "\n";
		}
	}

	return 0;
}