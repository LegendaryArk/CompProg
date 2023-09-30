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
const ll INF = 0x3f;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

const int MM = 1e5+5;
int N, M, p, q;
bool vis[MM];
vi adj[MM];

void dfs(int u) {
	vis[u] = true;
	for (auto v : adj[u]) {
		if (!vis[v]) dfs(v);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0, a, b; i < M; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
	}

	cin >> p >> q;
	dfs(p);
	if (vis[q]) { cout << "yes\n"; return 0; }

	memset(vis, false, sizeof(vis));
	dfs(q);
	if (vis[p]) cout << "no\n";
	else cout << "unknown\n";

	return 0;
}