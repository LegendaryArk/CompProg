#include <bits/stdc++.h>
using namespace std;

const int MM = 53;
int T, L, W, mp[MM][MM];
pair<int, int> c, w;

void bfs() {
	queue<pair<int, int>> q;
	q.push(c);
	mp[c.first][c.second] = 0;

	while (!q.empty()) {
		auto& [x, y] = q.front(); q.pop();
		if (make_pair(x, y) == w) return;

		pair<int, int> dir[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
		for (auto& [a, b] : dir) {
			if (x + a < 1 || x + a > W || y + b < 1 || y + b > L) continue;
			if (mp[x + a][y + b] > mp[x][y] + 1) {
				mp[x + a][y + b] = mp[x][y] + 1;
				q.push({x + a, y + b});
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	while (T--) {
		memset(mp, 0, sizeof(mp));

		cin >> L >> W;
		for (int i = 1; i <= W; i++) {
			for (int j = 1; j <= L; j++) {
				char a; cin >> a;
				if (a == 'C') c = {i, j};
				if (a == 'W') w = {i, j};
				if (a == 'X') mp[i][j] = -5;
				if (a == 'O' || a == 'W') mp[i][j] = 0x3f;
			}
		}

		bfs();

		cout << (mp[w.first][w.second] < 60 ? to_string(mp[w.first][w.second]) : "#notworth") << "\n";
	}

	return 0;
}