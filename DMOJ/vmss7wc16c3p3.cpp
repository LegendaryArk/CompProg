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
int N, M, B, Q, dis[MM];
bool vis[MM];
vector<vp> adj(MM);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M >> B >> Q;
	for (int i = 1, x, y, z; i <= M; i++) {
		cin >> x >> y >> z;
		adj[x].push_back({y, z}); adj[y].push_back({x, z});
	}

	memset(dis, 0x3f, sizeof(dis));
	priority_queue<pii, vp, greater<pii>> q;
	dis[B] = 0; q.push({dis[B], B});
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

	while (Q--) {
		int a; cin >> a;
		cout << (vis[a] ? dis[a] : -1) << "\n";
	}

	return 0;
}