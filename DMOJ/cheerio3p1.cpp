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

const int MM = 1e3+5;
int n, m, g[MM][MM];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	memset(g, 0, sizeof(g));
	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= m; c++) {
			char a; cin >> a;
			if (a == 'W') {
				g[r][c] = 1;
				for (int i = -1; i <= 1; i += 2) {
					if (!g[r][c + i]) g[r][c + i] = 2;
					if (!g[r + i][c]) g[r + i][c] = 2;
				}
			}
		}
	}

	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= m; c++) {
			switch (g[r][c]) {
				case 0: cout << "."; break;
				case 1: cout << "W"; break;
				case 2: cout << "C"; break;
			}
		}
		cout << "\n";
	}

	return 0;
}