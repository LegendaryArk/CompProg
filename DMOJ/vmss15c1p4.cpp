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

const int MM = 2005;
int T, N, M, G, dist[MM];
bool vis[MM];
vi stores;
vector<vp> adj(MM);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> T >> N >> M >> G;
	for (int i = 0, g; i < G; i++) {
		cin >> g;
		stores.push_back(g);
	}
	for (int i = 0, a, b, l; i < M; i++) {
		cin >> a >> b >> l;
		adj[a].push_back({b, l});
	}

	memset(dist, 0x3f, sizeof(dist));
	priority_queue<pii, vp, greater<pii>> q;
	dist[0] = 0; q.push({0, 0});
	while (!q.empty()) {
		auto [d, u] = q.top(); q.pop();
		if (vis[u]) continue;
		vis[u] = true;

		for (auto [v, w] : adj[u]) {
			if (dist[v] > dist[u] + w) {
				dist[v] = dist[u] + w;
				q.push({dist[v], v});
			}
		}
	}

	int ans = 0;
	for (int n : stores)
		if (dist[n] <= T) ans++;
	cout << ans << "\n";

	return 0;
}