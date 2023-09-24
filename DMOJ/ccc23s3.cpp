#include <bits/stdc++.h>
using namespace std;

const int MM = 2005;
int N, M, R, C, cntR = 0, cntC = 0;
char mp[MM][MM];

void impossible() { cout << "IMPOSSIBLE\n"; exit(0); }

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> R >> C;

	memset(mp, 'a', sizeof(mp));
    for (int i = R + 1; i <= N; i++) mp[i][M] = mp[i][1] + 1;
    for (int i = C + 1; i <= M; i++) mp[N][i] = mp[1][i] + 1;

    if (R != N && C == 0) mp[N][M] = 'c';
    if (R == N && C != 0) {
        if (M % 2 == 0 && C % 2 != 0) impossible();

        for (int i = 1; i <= M; i++) {
            if (i <= C / 2 || i > M - C / 2) mp[N][i] = mp[1][i];
            else mp[N][i] = mp[1][i] + 1;
        }
        if (C % 2 != 0) mp[N][(M + 1) / 2] = mp[1][(M + 1) / 2];
    }
    if (C == M && R != 0) {
        if (N % 2 == 0 && R % 2 != 0) impossible();

        for (int i = 1; i <= N; i++) {
            if (i <= R / 2 || i > N - R / 2) mp[i][M] = mp[i][1];
            else mp[i][M] = mp[i][1] + 1;
        }
        if (R % 2 != 0) mp[(N + 1) / 2][M] = mp[(N + 1) / 2][1];
    }

    for (int i= 1; i <= N; i++, cout << "\n")
        for (int j = 1; j <= M; j++)
            cout << mp[i][j];


	return 0;
}