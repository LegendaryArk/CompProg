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
	if (n == 2 || n == 3) { cout << "NO SOLUTION\n"; return 0; }
	if (n == 4) { cout << "2 4 1 3\n"; return 0; }
	for (int i = 1; i <= n; i += 2) cout << i << " ";
	for (int i = 2; i <= n; i += 2) cout << i << " ";

	return 0;
}