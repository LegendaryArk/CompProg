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
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int n;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> n;
	cout << 0 << "\n";
	for (ll i = 2; i <= n; i++) {
		cout << (i * i) * (i * i - 1) / 2 - 4 * ((i - 1) * (i - 2)) << "\n";
	}

	return 0;
}