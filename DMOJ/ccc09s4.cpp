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

const int MM = 5005;
int N, T, K, D, dis[MM], adj[MM][MM];
pii cost[MM];
bool vis[MM];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> T;
	for (int i = 1, x, y, c; i <= T; i++) {
		cin >> x >> y >> c;
		adj[x][y] = adj[y][x] = c;
	}
	cin >> K;
	for (int i = 0, z, p; i < K; i++) {
		cin >> z >> p;
		cost[i] = {z, p};
	}

	cin >> D;
	memset(dis, INF, sizeof(dis));
	dis[D] = 0;
	for (int t = 1; t <= N; t++) {
		int mn = INF, u = -1;
		for (int i = 1; i <= N; i++) {
			if (!vis[i] && dis[i] < mn) {
				mn = dis[i]; u = i;
			}
		}

		if (u == -1) break;
		vis[u] = true;

		for (int v = 1; v <= N; v++) {
			if (adj[u][v] > 0 && dis[v] > dis[u] + adj[u][v])
				dis[v] = dis[u] + adj[u][v];
		}
	}

	int mn = INF;
	for (int i = 0; i < K; i++) mn = min(mn, dis[cost[i].f] + cost[i].s);
	cout << mn << "\n";

	return 0;
}