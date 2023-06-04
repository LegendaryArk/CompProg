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

int t, a, b, c;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> t >> a >> b >> c;

	int machine = 1, times = 0;
	int output = 0;
	while (t > 0) {
		t--; output++; times++;
		if (machine == 1) {
			if (++a == 35) {
				t += 30;
				a = 0;
			}
		} else if (machine == 2) {
			if (++b == 100) {
				t += 60;
				b = 0;
			}
		} else {
			if (++c == 10) {
				t += 9;
				c = 0;
			}
		}

		if (times == 3) {
			machine++;
			if (machine == 4) machine = 1;
			times = 0;
		}
	}

	cout << "Martha plays " << output << " times before going broke.\n";

	return 0;
}
