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

const int MM = 105;

int N;
vd streams;

void split(int n, int p) {
	if (p == 0) return;
	streams.insert(streams.begin() + n, round(streams[n - 1] * ((100 - p) / 100.0)));
	streams[n - 1] -= round(streams[n - 1] * (p / 100.0));
}
void join(int n) {
	streams[n - 1] += streams[n];
	streams.erase(streams.begin() + n);
	for (int i = n; i < streams.size(); i++) streams[i] = streams[i + 1];
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		streams.push_back(x);
	}

	int ins = 0;
	while (ins != 77) {
		cin >> ins;
		if (ins == 99) {
			int n, p; cin >> n >> p;
			split(n, p);
		} else if (ins == 88) {
			int n; cin >> n;
			join(n);
		}
	}

	for (double f : streams) cout << (int) round(f) << " ";

	return 0;
}