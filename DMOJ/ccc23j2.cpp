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

int N;
string p;
map<string, int> h = {{"Poblano", 1500},
					  {"Mirasol", 6000},
					  {"Serrano", 15500},
					  {"Cayenne", 40000},
					  {"Thai", 75000},
					  {"Habanero", 125000}};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		cin >> p;
		ans += h[p];
	}
	cout << ans << "\n";

	return 0;
}