#include <bits/stdc++.h>
using namespace std;

const int MM = 105;
int N, M, W, ant[MM], bmp[MM];
bool vis[MM];
vector<int> adj[MM];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	queue<int> q;
	cin >> W;
	for (int i = 0; i < W; i++) {
		int w; cin >> w;
		q.push(w); vis[w] = true; ant[w] = 0;
	}
	while (!q.empty()) {
		int u = q.front(); q.pop();

		for (int v : adj[u]) {
			if (vis[v]) continue;

			ant[v] = ant[u] + 4;
			vis[v] = true;
			q.push(v);
		}
	}

	memset(vis, false, sizeof(vis));

	q.push(1); vis[1] = true; bmp[1] = 0;
	while (!q.empty()) {
		int u = q.front(); q.pop();

		for (int v : adj[u]) {
			if (vis[v] || bmp[u] + 1 >= ant[v]) continue;

			bmp[v] = bmp[u] + 1;
			vis[v] = true;
			q.push(v);
		}
	}

	cout << (vis[N] ? to_string(bmp[N]) : "sacrifice bobhob314") << "\n";

	return 0;
}