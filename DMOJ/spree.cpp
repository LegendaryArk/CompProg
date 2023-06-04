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
int N, T, dp[MM];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> T;
	for (int i = 1, v, h; i <= N; i++) {
		cin >> v >> h;
		for (int j = T; j >= h; j--) {
			dp[j] = max(dp[j], dp[j - h] + v);
		}
	}
	cout << dp[T] << "\n";

	return 0;
}