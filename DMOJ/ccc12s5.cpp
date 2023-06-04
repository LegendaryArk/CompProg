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

const int MM = 26;
int R, C, K, dis[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C >> K;
	for (int i = 0, r, c; i < K; i++) {
		cin >> r >> c;
		dis[r][c] = -1;
	}

	dis[1][1] = 1;
	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {
			if (dis[r][c] == -1) continue;
			if (dis[r - 1][c] != -1) dis[r][c] += dis[r - 1][c];
			if (dis[r][c - 1] != -1) dis[r][c] += dis[r][c - 1];
		}
	}

	cout << dis[R][C] << "\n";

	return 0;
}