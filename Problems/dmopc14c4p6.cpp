#include <bits/stdc++.h>
using namespace std;
const int MAX = 5e5 + 5;

int N, furthest;
vector<int> adj[MAX];

void bfs(int s, vector<int>& dist) {
	queue<int> q;
	vector<bool> visited(N + 1);
	q.push(s);
	dist[s] = 0;
	visited[s] = true;

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		furthest = u;
		for (int v : adj[u]) {
			if (!visited[v]) {
				q.push(v);
				visited[v] = true;
				dist[v] = dist[u] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i < N; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> dist1(N + 1), dist2(N + 1);
	bfs(1, dist1);
	bfs(furthest, dist1);
	bfs(furthest, dist2);
	for (int i = 1; i <= N; i++) {
		cout << max(dist1[i], dist2[i]) + 1 << "\n";
	}
}