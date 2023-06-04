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

int n, m;
vector<string> adj, nouns;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) { string s; cin >> s; adj.push_back(s); }
	for (int i = 0; i < m; i++) { string s; cin >> s; nouns.push_back(s); }

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << adj[i] << " as " << nouns[j] << "\n";
		}
	}

	return 0;
}