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

const int MM = 105;
int N, W, dp[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> W;
	for (int i = 1, w, v; i <= N; i++) {
		cin >> w >> v;
		for (int j = MM - 1; j >= v; j--) {
			if (j > W) continue;
			dp[j] = max(dp[j], dp[j - w] + v);
		}
	}
	for (int i = MM - 1; i >= 0; i--)
		if (dp[i] <= W) cout << 

	return 0;
}