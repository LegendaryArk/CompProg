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

const int MM = 1e5 + 3;
typedef array<int, 4> E;
int N, M, D, p[MM];
vector<E> edge;

int findSet(int d) {
	if (d != p[d]) p[d] = findSet(p[d]);
	return p[d];
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M >> D;
	for (int i = 1; i <= N; i++) p[i] = i;
	for (int i = 1, u, v, w; i <= M; i++) {
		cin >> u >> v >> w;
		edge.push_back({w, i >= N, u, v});
	}
	sort(edge.begin(), edge.end());

	int ans = 0, prev;
	for (int i = 0; i < edge.size(); i++) {
		int t = edge[i][1], u = edge[i][2], v = edge[i][3];
		int fu = findSet(u), fv = findSet(v);
		if (fu != fv) { p[fu] = fv; ans += t; prev = i; }
	}

	if (edge[prev][1]) {
		for (int i = 1; i <= N; i++) p[i] = i;
		for (int i = 0; i < prev; i++) {
			auto [w, t, u, v] = edge[i];
			if (!t || w < edge[prev][0]) {
				int fu = findSet(u), fv = findSet(v);
				if (fu != fv) p[fu] = fv;
			}
		}
		for (int i = prev + 1; i < edge.size(); i++) {
			auto [w, t, u, v] = edge[i];
			if (!t && w <= D) {
				int fu = findSet(u), fv = findSet(v);
				if (fu != fv) { ans--; break; }
			}
		}
	}

	cout << ans << "\n";

	return 0;
}