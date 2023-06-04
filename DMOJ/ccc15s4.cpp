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

const int MM = 2005;
int K, N, M, a, b, dis[MM][MM];
bool vis[MM][MM];
vector<vector<array<int, 3>>> adj(MM);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> K >> N >> M;
	while (M--) {
		int u, v, t, h;
		cin >> u >> v >> t >> h;
		adj[u].push_back({-t, h, v});
		adj[v].push_back({-t, h, u});
	}
	cin >> a >> b;

	memset(dis, INF, sizeof(dis));
	priority_queue<array<int, 3>> q;
	dis[a][K] = 0; q.push({0, K, a});
	while (!q.empty()) {
		auto [t, k, u] = q.top(); q.pop();
		if (vis[u][k]) continue;
		vis[u][k] = true;
		if (u == b) { cout << -t << "\n"; return 0; }

		for (auto [w, h, v] : adj[u]) {
			if (k > h && dis[v][k - h] > -t - w) {
				dis[v][k - h] = -t - w;
				q.push({-dis[v][k - h], k - h, v});
			}
		}
	}
	cout << "-1\n";

	return 0;
}