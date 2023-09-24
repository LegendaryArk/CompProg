#include <bits/stdc++.h>
using namespace std;

const int MM = 2005;
int n, m, a, b;
vector<int> adj[MM];
bool visited[2005];

void dfs(int u) {
	visited[u] = true;

	for (int v : adj[u]) {
		if (!visited[v]) dfs(v);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> a >> b;
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(a);
	cout << (visited[b] ? "GO SHAHIR!" : "NO SHAHIR!") << "\n";

	return 0;
}