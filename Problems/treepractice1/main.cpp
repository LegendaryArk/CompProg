#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MM = 5e5 + 5;

int N, dis[MM], pre[MM], diam, rad, far;
vector<pii> adj[MM];

void dfs(int u, int parent, int d) {
	pre[u] = parent;
	dis[u] = d;
	if (dis[u] > diam) {
		far = u;
		diam = dis[u];
	}
	for (auto& c : adj[u]) {
		int v = c.first, w = c.second;
		if (v != parent) dfs(c.first, u, d + w);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1, u, v, w; i < N; i++) {
		cin >> u >> v >> w;
		adj[u].push_back({ v, w });
		adj[v].push_back({ u, w });
	}
	dfs(1, -1, 0);
	diam = 0;
	dfs(far, -1, 0);
	rad = 1e9;
	for (int u = far; u != -1; u = pre[u])
		rad = min(rad, max(dis[u], diam - dis[u]));

	cout << diam << "\n" << rad << "\n";
}