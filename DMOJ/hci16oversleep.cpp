#include <bits/stdc++.h>
using namespace std;

const int MM = 1003;
int n, m, mp[MM][MM];
pair<int, int> s, e;

void bfs() {
	queue<pair<int, int>> q;
	q.push(s);
	mp[s.first][s.second] = 0;

	while (!q.empty()) {
		auto& [x, y] = q.front(); q.pop();
		if (x == e.first && y == e.second) return;

		pair<int, int> dir[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
		for (auto& [a, b] : dir) {
			if (x + a >= 0 && x + a < n && y + b >= 0 && y + b < m && mp[x + a][y + b] > mp[x][y] + 1) {
				mp[x + a][y + b] = mp[x][y] + 1;
				q.push({x + a, y + b});
			}
		}
	}
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	memset(mp, 0x3f, sizeof(mp));

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c; cin >> c;
			if (c == 'X') mp[i][j] = -1;
			if (c == 's') s = {i, j};
			if (c == 'e') e = {i, j};
		}
	}

	bfs();

	cout << (mp[e.first][e.second] == 0x3f ? -1 : mp[e.first][e.second] - 1) << "\n";

	return 0;
}