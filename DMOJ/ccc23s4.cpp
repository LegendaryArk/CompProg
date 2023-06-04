#include <bits/stdc++.h>
using namespace std;

const int MM = 2000;
int N, M, p[MM];
vector<vector<array<int, 3>>> adj(MM);

int find(int n) {
	if (n == p[n]) return n;
	return find(p[n]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0, u, v, l, c; i < M; i++) {
		cin >> u >> v >> l >> c;
		adj[u].push_back({l, c, v});
		adj[v].push_back({l, c, u});
	}

	priority_queue<array<int, 3>> q;


	return 0;
}