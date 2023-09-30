#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
int N, M, K, dis[MM];
vector<int> adj[MM];

void dfs(int u, int parent) {
	for (int v : adj[u]) {
		if (v == parent) continue;
		if (dis[v] > dis[u] + 1) {
			dis[v] = dis[u] + 1;
			dfs(v, u);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dis, 0x3f, sizeof(dis));

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	cin >> K;
	for (int i = 0; i < K; i++) {
		int a; cin >> a;
		dis[a] = 0;
		dfs(a, -1);
	}

	int mx = 0;
	for (int i = 1; i <= N; i++) mx = max(mx, dis[i]);
	cout << mx << "\n";

	return 0;
}