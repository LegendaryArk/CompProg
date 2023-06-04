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
const ll INF = 1e18;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int N;

int cut(ll h) {
	if (h % 2 == 1) return 1;
	int x = cut(h/2);
	return (x * x + 1) % MOD;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		ll h; cin >> h;
		ans = (ans + cut(h)) % MOD;
	}
	cout << ans << "\n";

	return 0;
}
