#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5;

int N, M;
vector<int> adj[MAX];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 1, x, y; i <= M; i++) {
		cin >> x >> y;
		adj[y].push_back(x);
	}

	vector<bool> vis(N + 1);
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int u = q.front(); q.pop();
		for (int v : adj[u]) {
			if (!vis[v]) {
				q.push(v);
				vis[v] = true;
			}
		}
	}
	if (adj[1].empty()) vis[1] = true;

	for (int i = 1; i <= N; i++) {
		cout << (vis[i] ? 1 : 0);
	}
	cout << "\n";
}