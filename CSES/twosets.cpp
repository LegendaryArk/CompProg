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
vi a, b;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> n;
	if (n % 4 == 1 || n % 4 == 2) { cout << "NO\n"; return 0; }

	cout << "YES\n";
	for (int i = n; i >= 4; i -= 4) {
		a.push_back(i);
		a.push_back(i - 3);
		b.push_back(i - 1);
		b.push_back(i - 2);
	}
	if (n % 4 == 3) {
		a.push_back(1);
		a.push_back(2);
		b.push_back(3);
	}

	cout << a.size() << "\n";
	for (int i : a) cout << i << " ";
	cout << "\n";
	cout << b.size() << "\n";
	for (int i : b) cout << i << " ";
	cout << "\n";

	return 0;
}