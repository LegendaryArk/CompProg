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

int a, b;
vi t;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> a >> b;
	t.push_back(a); t.push_back(b);
	while (t.end()[-2] >= t.end()[-1])
		t.push_back(t.end()[-2] - t.end()[-1]);

	cout << t.size() << "\n";

	return 0;
}