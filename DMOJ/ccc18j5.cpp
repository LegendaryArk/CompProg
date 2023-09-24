#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
int n, k, dis[MM];
bool vis[MM];
vector<int> adj[MM];

void bfs() {
	queue<int> q;
	q.push(1);
	dis[1] = 1;
	vis[1] = true;

	while (!q.empty()) {
		int u = q.front(); q.pop();

		if (adj[u].empty()) k = min(k, dis[u]);

		for (int v : adj[u]) {
			if (!vis[v] && dis[v] > dis[u] + 1) {
				q.push(v);
				dis[v] = dis[u] + 1;
				vis[v] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int m; cin >> m;
		for (int j = 0; j < m; j++) {
			int a; cin >> a;
			adj[i].push_back(a);
		}
	}

	k = 0x3f;
	memset(dis, 0x3f, sizeof(dis));
	bfs();
	cout << (find(vis + 1, vis + n, false) == vis + n ? "Y" : "N") << "\n" << k << "\n";

	return 0;
}