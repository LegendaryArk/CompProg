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

const int MM = 40;
ll A, B, N, dp[MM];
vi motels = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B >> N;
	for (int i = 0, m; i < N; i++) {
		cin >> m;
		motels.push_back(m);
	}
	sort(motels.begin(), motels.end());

	dp[0] = 1;
	for (int i = 1; i < motels.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (motels[i] - motels[j] < A) continue;
			if (motels[i] - motels[j] > B) continue;
			dp[i] += dp[j];
		}
	}
	cout << dp[motels.size() - 1] << "\n";

	return 0;
}