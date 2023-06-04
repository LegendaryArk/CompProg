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

string a, b, c, str;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> a >> b >> c;
	str += a + b + c;

	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		int n = str[i] - 48;
		if (i % 2 == 0) sum += n;
		else sum += n * 3;
	}
	cout << "The 1-3-sum is " << sum << "\n";

	return 0;
}