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

const int MM = 1e5 + 5;
int N, h[MM], dp[MM];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) cin >> H[i];

	memset(dp, INF, sizeof(dp));
	dp[1] = 0;
	for (int i = 1; i <= N; i++) {
		dp[i + 1] = min(dp[i + 1], dp[i] + abs(H[i] - H[i + 1]));
		dp[i + 2] = min(dp[i + 2], dp[i] + abs(H[i] - H[i + 2]));
	}
	cout << dp[N] << "\n";

	return 0;
}