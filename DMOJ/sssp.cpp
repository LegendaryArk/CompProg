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

const int MM = 1003;
int N, M, dis[MM];
bool vis[MM];
vector<vp> adj(MM);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		int u, v, w; cin >> u >> v >> w;
		adj[u].push_back({v, w}); adj[v].push_back({u, w});
	}

	memset(dis, 0x3f, sizeof(dis));
	priority_queue<pii, vp, greater<pii>> q;
	dis[1] = 0; q.push({dis[1], 1});
	while (!q.empty()) {
		auto [d, u] = q.top(); q.pop();
		if (vis[u]) continue;
		vis[u] = true;

		for (auto [v, w] : adj[u]) {
			if (dis[v] > dis[u] + w) {
				dis[v] = dis[u] + w;
				q.push({dis[v], v});
			}
		}
	}

	for (int i = 1; i <= N; i++) cout << (vis[i] ? dis[i] : -1) << "\n";

	return 0;
}