#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5 + 5;

int N, M, diam, far, start, nodes;
bool pho[MM];
vector<int> adj[MM];

void dfsPrune(int u, int par) {
	for (int v : adj[u]) {
		if (v == par) continue;
		dfsPrune(v, u);
		pho[u] |= pho[v];
	}
	nodes += pho[u];
}

void dfsDiam(int u, int par, int dist) {
	if (dist > diam) {
		diam = dist;
		far = u;
	}
	for (int v : adj[u])
		if (pho[v] && v != par) dfsDiam(v, u, dist + 1);
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> start;
		pho[start] = true;
	}
	for (int i = 1, u, v; i < N; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfsPrune(start, -1);
	dfsDiam(start, -1, 0);
	dfsDiam(far, -1, 0);

	cout << 2 * (nodes - 1) - diam << "\n";
}