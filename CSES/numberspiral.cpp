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

int t;
ll r, c;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> t;
	while (t--) {
		cin >> r >> c;
		if (r > c) {
			if (r % 2 == 0) cout << r * r - c + 1 << "\n";
			else cout << (r - 1) * (r - 1) + c << "\n";
		} else {
			if (c % 2 == 1) cout << c * c - r + 1 << "\n";
			else cout << (c - 1) * (c - 1) + r << "\n";
		}
	}

	return 0;
}