#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
int x, y, dis[MM];
bool vis[MM];

void bfs() {
	queue<int> q; q.push(x);
	dis[x] = 0; vis[x] = true;

	while (!q.empty()) {
		int u = q.front(); q.pop();

		if (u == y) return;

		for (int i = -1; i <= 1; i += 2) {
			if (u + i >= 0 && u + i <= 1e5 && !vis[u + i] && dis[u + i] > dis[u] + 1) {
				vis[u + i] = true;
				dis[u + i] = dis[u] + 1;
				q.push(u + i);
			}
		}
		if (u * 2 >= 0 && u * 2 <= 1e5 && !vis[u * 2] && dis[u * 2] > dis[u] + 1) {
			vis[u * 2] = true;
			dis[u * 2] = dis[u] + 1;
			q.push(u * 2);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> x >> y;
	memset(dis, 0x3f, sizeof(dis));
	bfs();
	cout << dis[y] << "\n";

	return 0;
}