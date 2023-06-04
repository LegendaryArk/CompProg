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

int P;
int minx, miny, maxx, maxy;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> P;
	for (int i = 0; i < P; i++) {
		int x, y;
		cin >> x >> y;
		if (x < minx) minx = x;
		if (y < miny) miny = y;
		if (x > maxx) maxx = x;
		if (y > maxy) maxy = y;
	}

	int s1 = maxy - miny;
	int s2 = maxx - minx;
	cout << s1 + s1 + s2 + s2;

	return 0;
}