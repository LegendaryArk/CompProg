#include <bits/stdc++.h>
using namespace std;

int N, M, K;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> K;
	bool rm[N][M];
	memset(rm, false, sizeof(rm));
	for (int i = 0, r, c; i < K; i++) {
		cin >> r >> c;
		rm[r-1][c-1] = true;
	}

	int t = 0;
	for (int r = 0; r < N; r++) {
		for (int c = 0; c < M; c++) {
			if (rm[r][c]) continue;

			int f = 0;
			if (r-1 > -1) {
				if (c-1 > -1 && rm[r-1][c-1]) f++;
				if (rm[r-1][c]) f++;
				if (c+1 < M && rm[r-1][c+1]) f++;
			}
			if (c-1 > -1 && rm[r][c-1]) f++;
			if (c+1 < M && rm[r][c+1]) f++;
			if (r+1 < N) {
				if (c-1 > -1 && rm[r+1][c-1]) f++;
				if (rm[r+1][c]) f++;
				if (c+1 < M && rm[r+1][c+1]) f++;
			}
			
			if (f >= 3) t++;
		}
	}

	cout << t << "\n";
}