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

const int MM = 10005;
int N, h[MM], w[MM];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> N;
	for (int i = 0; i < N + 1; i++) cin >> H[i];
	for (int i = 0; i < N; i++) cin >> w[i];

	long double ans = 0;
	for (int i = 0; i < N; i++) {
		ans += w[i] * ((H[i] + H[i + 1]) / 2.0);
	}
	cout << fixed << ans;

	return 0;
}