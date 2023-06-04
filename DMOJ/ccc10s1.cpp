#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<pii> vp;

#define f first

const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

struct pc {
	string name;
	int r, s, d, v;

	bool operator<(const pc &o) const {
		if (v == o.v) return name < o.name;
		return v > o.v;
	}
};

int n;
vector<pc> pcs;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> n;
	if (n == 0) return 0;
	if (n == 1) {
		string name;
		cin >> name;
		cout << name << "\n";
		return 0;
	}

	while (n--) {
		string name;
		int r, s, d;
		cin >> name >> r >> s >> d;
		pcs.push_back({name, r, s, d, 2 * r + 3 * s + d});
	}
	sort(pcs.begin(), pcs.end());
	cout << pcs[0].name << "\n" << pcs[1].name << "\n";

	return 0;
}