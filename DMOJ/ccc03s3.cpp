#include <bits/stdc++.h>
using namespace std;

const int MM = 25+5;
int N, R, C;
vector<int> rooms;
bool vis[MM][MM];

int bfs(int r, int c) {
	queue<pair<int, int>> q;
	q.emplace(r, c);
	vis[r][c] = true;

	int area = 0;
	while (!q.empty()) {
		auto& [x, y] = q.front(); q.pop(); area++;

		pair<int, int> dir[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
		for (auto& [a, b] : dir)
			if (x + a > 0 && x + a <= R && y + b > 0 && y + b <= C && !vis[x + a][y + b]) {
				vis[x + a][y + b] = true;
				q.emplace(x + a, y + b);
			}
	}

	return area;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> R >> C;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			char c; cin >> c;
			if (c == 'I') vis[i][j] = true;
			else vis[i][j] = false;
		}
	}

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (!vis[i][j]) rooms.push_back(bfs(i, j));
		}
	}

	sort(rooms.begin(), rooms.end(), greater());

	int c = 0;
	for (int a : rooms) {
		if (N - a < 0) break;

		N -= a;
		c++;
	}

	cout << c << " room" << (c != 1 ? "s" : "") << ", " << N << " square metre(s) left over\n";

	return 0;
}