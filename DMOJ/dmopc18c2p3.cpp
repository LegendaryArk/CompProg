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
int N, M, K, A, B, disA[MM], disB[MM];
bool vis[MM];
vi k;
vector<vi> adj(MM);

void dijkstra(int* dis, int st) {
	priority_queue<pii, vp, greater<pii>> q;
	dis[st] = 0; q.push({0, st});
	while (!q.empty()) {
		auto [t, u] = q.top(); q.pop();
		if (vis[u]) continue;
		vis[u] = true;
		for (auto v : adj[u]) {
			if (dis[v] > dis[u] + 1) {
				dis[v] = dis[u] + 1;
				q.push({dis[v], v});
			}
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M >> K >> A >> B;
	for (int i = 0, s; i < K; i++) {
		cin >> s;
		k.push_back(s);
	};
	for (int i = 0, a, b; i < M; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	memset(disA, 0x3f, sizeof(disA));
	memset(vis, false, sizeof(vis));
	dijkstra(disA, A);
	memset(vis, false, sizeof(vis));
	memset(disB, 0x3f, sizeof(disB));
	dijkstra(disB, B);
	int ans = INF;
	for (int s : k)	{
		ans = min(ans, disA[s] + disB[s]);
	}

	cout << ans << "\n";

	return 0;
}