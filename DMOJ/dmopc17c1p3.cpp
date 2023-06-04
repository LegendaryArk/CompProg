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
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

const int MM = 1e5 + 5;
int N, M;
pii dis[MM];
bool vis[MM];
vector<vector<pair<int, bool>>> adj(MM);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M;
	for (int i = 0, a, b, t; i < M; i++) {
		cin >> a >> b >> t;
		adj[a].push_back({b, t});
		adj[b].push_back({a, t});
	}

	fill(dis, dis + MM, make_pair(INF, INF));
	priority_queue<array<int, 3>, vector<array<int, 3>>, greater<array<int, 3>>> q;
	dis[1] = {0, 0}; q.push({0, 0, 1});
	while (!q.empty()) {
		auto [t, d, u] = q.top(); q.pop();
		if (vis[u]) continue;
		vis[u] = true;

		for (auto [v, w] : adj[u]) {
			if (dis[v].f > dis[u].f + w) {
				dis[v].f = dis[u].f + w;
				dis[v].s = dis[u].s + 1;
				q.push({dis[v].f, dis[v].s, v});
			} else if (dis[v].f == dis[u].f + w && dis[v].s > dis[u].s + 1) {
				dis[v].s = dis[u].s + 1;
				q.push({dis[v].f, dis[v].s, v});
			}
		}
	}
	if (!vis[N]) cout << -1 << "\n";
	else cout << dis[N].f << " " << dis[N].s << "\n";

	return 0;
}