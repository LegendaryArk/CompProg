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

int N, K;

bool compare(pii a, pii b) {
	return a.f - a.s > b.f - b.s;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> K;
	vp costs(N);
	for (int i = 0; i < N; i++) {
		cin >> costs[i].f >> costs[i].s;
	}

	sort(costs.begin(), costs.end(), compare);

	ll totalCost = 0;
	for (int i = 0; i < N; i++) {
		if (i < K) totalCost += costs[i].s;
		else totalCost += costs[i].f;
	}

	cout << totalCost << "\n";

	return 0;
}
