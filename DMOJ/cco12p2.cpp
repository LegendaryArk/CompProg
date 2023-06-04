#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<pii> vp;

#define f first
#define s second

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

const int MM = 2e4+3;
int N, M, dis1[MM], dis2[MM];
vp adj[MM], rev[MM];
vector<array<int, 3>> edges;

void dijkstra(int start, vp adj[], int dis[]) {
	fill(dis, dis + MM, INF);
	priority_queue<pii, vp, greater<pii>> q;
	dis[start] = 0; q.push({0, start});
	while (!q.empty()) {
		auto [d, u] = q.top(); q.pop();
		if (d > dis[u]) continue;

		for (auto [v, w] : adj[u]) {
			if (dis[v] > dis[u] + w) {
				dis[v] = dis[u] + w;
				q.push({dis[v], v});
			}
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M;
	for (int i = 1, u, v, w; i <= M; i++) {
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		rev[v].push_back({u, w});
		edges.push_back({u, v, w});
	}

	dijkstra(1, adj, dis1);
	dijkstra(N, rev, dis2);

	if (dis1[N] >= INF) { cout << "-1\n"; return 0; }
	int ans = INF;
	for (auto [u, v, w] : edges) {
		int temp = dis1[u] + w + dis2[v];
		if (temp > dis1[N] && temp < ans) ans = temp;
	}
	cout << (ans >= INF ? -1 : ans) << "\n";

	return 0;
}