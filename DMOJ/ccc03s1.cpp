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

int n;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	int pos = 1;
	while (pos < 100) {
		cin >> n;
		if (n == 0) { cout << "You Quit!\n"; break; }

		pos += n;
		if (pos > 100) pos -= n;
		else if (pos == 54) pos = 19;
		else if (pos == 90) pos = 48;
		else if (pos == 99) pos = 77;
		else if (pos == 9) pos = 34;
		else if (pos == 40) pos = 64;
		else if (pos == 67) pos = 86;

		cout << "You are now on square " << pos << "\n";
		if (pos == 100) cout << "You Win!\n";
	}

	return 0;
}