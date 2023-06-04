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

int c, r, dx, dy, x = 0, y = 0;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> c >> r;
	cin >> dx >> dy;
	while (dx != 0 || dy != 0) {
		x = clamp(x + dx, 0, c);
		y = clamp(y + dy, 0, r);

		cout << x << " " << y << "\n";
		cin >> dx >> dy;
	}

	return 0;
}