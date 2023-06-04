#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5;
int N, M, dis[MM];
bool vis[MM];
vector<vector<pair<int, int>>> adj(MM);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	memset(dis, 0x3f, sizeof(dis));
	priority_queue<pair<int, int>, vector<pair<int, int>>> q;
	dis[1] = 0; q.push({0, 1});
	while (!q.empty()) {
		auto [d, u] = q.top(); q.pop();
		if (vis[u]) continue;
		vis[u] = true;

		for (auto [v, w] : adj[u]) {
			if (dis[v] > dis[u] | w) {
				dis[v] = dis[u] | w;
				q.push({dis[v], v});
			}
		}
	}

	cout << dis[N] << "\n";
}