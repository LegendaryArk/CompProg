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

const int MM = 1e5+5;
int X, Y, G;
unordered_map<string, vector<string>> same, diff;
vector<string> g;

void mapInsert(unordered_map<string, vector<string>>& map, string a, string b) {
	if (map.count(a)) map[a].push_back(b);
	else map[a] = {b};
	if (map.count(b)) map[b].push_back(a);
	else map[b] = {a};
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> X;
	for (int i = 0; i < X; i++) {
		string a, b; cin >> a >> b;
		mapInsert(same, a, b);
	}
	cin >> Y;
	for (int i = 0; i < Y; i++) {
		string a, b; cin >> a >> b;
		mapInsert(diff, a, b);
	}

	cin >> G;
	int ans = 0;
	for (int i = 0; i < G; i++) {
		string a, b, c; cin >> a >> b >> c;
		g = {a, b, c};
		for (string x : g) {
			if (!same.count(x)) goto diff;
			for (string y : same[x]) {
				if (find(g.begin(), g.end(), y) == g.end()) {
					ans++;
					same[y].erase(find(same[y].begin(), same[y].end(), x));
				}
			}

			diff:;
			if (!diff.count(x)) continue;
			for (string y : diff[x]) {
				if (find(g.begin(), g.end(), y) != g.end()) {
					ans++;
					diff[y].erase(find(diff[y].begin(), diff[y].end(), x));
				}
			}
		}
	}
	cout << ans << "\n";

	return 0;
}