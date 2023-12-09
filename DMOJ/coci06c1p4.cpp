#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

const int MM = 55;
int R, C;
pair<int, int> start, stop, mp[MM][MM];
queue<pair<int, int>> flood;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;
	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			char a; cin >> a;
			mp[r][c].f = 0;
			if (a == '*') { flood.push({r, c}); mp[r][c].s = 0; }
			else if (a == 'X') mp[r][c].f = -1;
			else if (a == 'S') start = {r, c};
			else if (a == 'D') stop = {r, c};
		}
	}

	int n = 1;
	queue<pair<int, int>> q = flood;
	while (!q.empty()) {
		auto& [x, y] = flood.front(); flood.pop();
		if (mp[x + 1][y].f != -1 && make_pair(x + 1, y) != stop) { mp[x + 1][y].s = n; q.push({x + 1, y}); }
		if (mp[x - 1][y].f != -1 && make_pair(x - 1, y) != stop) { mp[x - 1][y].s = n; q.push({x - 1, y}); }
		if (mp[x][y + 1].f != -1 && make_pair(x, y + 1) != stop) { mp[x][y + 1].s = n; q.push({x, y + 1}); }
		if (mp[x][y - 1].f != -1 && make_pair(x, y - 1) != stop) { mp[x][y - 1].s = n; q.push({x, y - 1}); }
		n++;
	}

	pair<int, int> curS = start;
	n = 1;
	while (!q.empty()) {
		auto& [x, y] = curS;
		if (mp[x + 1][y].f == 0 && n > mp[x + 1][y].s) { mp[x + 1][y].f = mp[x][y].f + 1; q.push({x + 1, y}); }
		if (mp[x - 1][y].f == 0 && n > mp[x - 1][y].s) { mp[x - 1][y].f = mp[x][y].f + 1; q.push({x - 1, y}); }
		if (mp[x][y + 1].f == 0 && n > mp[x][y + 1].s) { mp[x][y + 1].f = mp[x][y].f + 1; q.push({x, y + 1}); }
		if (mp[x][y - 1].f == 0 && n > mp[x][y - 1].s) { mp[x][y - 1].f = mp[x][y].f + 1; q.push({x, y - 1}); }
		n++;
	}

	if (mp[stop.f][stop.s].f == 0) cout << "KAKTUS\n";
	else cout << mp[stop.f][stop.s].f << "\n";

	return 0;
}