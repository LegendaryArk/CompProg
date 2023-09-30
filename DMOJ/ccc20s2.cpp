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

const int MM = 1005;
int M, N, grid[MM][MM];
bool vis[MM][MM];
map<int, vp> factors;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> M >> N;
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> grid[i][j];
			if (factors.count(grid[i][j])) factors[grid[i][j]].push_back({i, j});
			else factors[grid[i][j]] = {{i, j}};
		}
	}

	queue<pii> q;
	vis[M][N] = true; q.push({M, N});
	while (!q.empty()) {
		auto [r, c] = q.front(); q.pop();
		if (r == 1 && c == 1) { cout << "yes\n"; return 0; }
		for (auto [i, j] : factors[r * c]) {
			if (vis[i][j]) continue;
			vis[i][j] = true;
			q.push({i, j});
		}
	}
	cout << "no\n";

	return 0;
}