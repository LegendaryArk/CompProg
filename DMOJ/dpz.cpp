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

const int MM = 2e5+5;
int N, C, h[MM], dp[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> C;
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			double cost = (h[j] - h[i]) * (h[j] - h[i]) + C;
			if (dp[j] < cost) dp[j] = cost;
		}
	}

	return 0;
}