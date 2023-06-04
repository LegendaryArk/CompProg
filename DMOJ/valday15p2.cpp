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
int C, M, dp[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> C >> M;

	for (int i = 1, n, k; i <= C; i++) {
		cin >> n >> k;
		for (int j = MM - 1; j >= k; j--) {
			dp[j] = max(dp[j], dp[j - n] + k);
		}
	}

	for (int i = MM - 1; i >= 0; i--) {
		if (dp[i] <= M) { cout << i << "\n"; break; }
	}

	return 0;
}