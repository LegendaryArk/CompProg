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

const int MM = 5e5+5;
int N, T, dp[MM][MM];
pii t[105];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> T;
	for (int i = 0, r, c; i < T; i++) {
		cin >> r >> c;
		dp[r][c] = -1;
		t[i] = {r, c};
	}

	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			if (dp[r][c] == -1) continue;

			for (int i = 0; i < T; i++) {
				if (r == t[i].f || c == t[i].s) goto nxt;
			}

			

			nxt:;
		}
	}

	return 0;
}