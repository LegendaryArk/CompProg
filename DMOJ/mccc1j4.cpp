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

const int MM = 1e6+5;
ll N, l[MM], r[MM];
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> s;
	for (int i = 0; i < N; i++) {
		if (s[i] == '1') l[i] = 0;
		else l[i] = l[i - 1] + 1;

		if (s[N - 1 - i] == '1') r[N - 1 - i] = 0;
		else r[N - 1 - i] = r[N - i] + 1;
	}
	ll ans = 0;
	for (int i = 0; i < N; i++) ans += min(l[i], r[i]);
	cout << ans << "\n";

	return 0;
}