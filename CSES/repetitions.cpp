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

string s;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> s;
	int maxLen = 0, curLen = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) curLen++;
		else { maxLen = max(maxLen, curLen); curLen = 1; }
	}
	maxLen = max(maxLen, curLen);
	cout << maxLen << "\n";

	return 0;
}