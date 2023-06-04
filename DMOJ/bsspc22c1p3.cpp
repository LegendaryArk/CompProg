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

const int MM = 1e3+5;
int N, M, K;
bool rm[MM][MM];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> M >> K;
	for (int i = 0, r, c; i < K; i++) {
		cin >> r >> c;
		rm[r][c] = true;
	}

	int t = 0;
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= M; c++) {
			if (rm[r][c]) continue;

			int f = 0;
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					f += rm[r+i][c+j];
				}
			}

			if (f >= 3) t++;
		}
	}
	cout << t << "\n";

	return 0;
}
