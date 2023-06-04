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
const ll INF = 1e18;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

typedef pair<ll, int> pli;

const int MM = 5e5 + 5;
int N, M, D;
vector<pli> adj[MM], rev[MM];
ll dis1[MM], dis2[MM];
bool vis[MM];

void dijkstra(int start, vector<pli> adj[], ll dis[]) {
	fill(dis, dis + MM, INF);
	fill(vis, vis + MM, false);
	priority_queue<pli, vector<pli>, greater<pli>> q;
	dis[start] = 0; q.push({0, start});
	while (!q.empty()) {
		int u = q.top().s; q.pop();
		if (vis[u]) continue;
		vis[u] = true;

		for (auto [w, v] : adj[u]) {
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
		adj[u].push_back({w, v});
		rev[v].push_back({w, u});
	}

	dijkstra(1, adj, dis1);
	dijkstra(N, rev, dis2);

	cin >> D;
	ll ans = dis1[N];
	for (int i = 1, u, v, w; i <= D; i++) {
		cin >> u >> v >> w;
		ans = min(ans, dis1[u] + w + dis2[v]);
	}

	cout << (ans == INF ? -1 : ans) << "\n";

	return 0;
}