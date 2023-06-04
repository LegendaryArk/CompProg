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

const int MM = 30;
int N, Q;
char board[MM][MM];
bool vis[MM][MM];
string str;

bool check(int i, int r, int c) {
	if (i == str.size()) return true;
	vis[r][c] = true;

	for (int dr = -1; dr <= 1; dr++) {
		for (int dc = -1; dc <= 1; dc++) {
			int nr = r + dr, nc = c + dc;
			if (nr < 0 || nr >= N || nc < 0 || nc >= N || vis[nr][nc] || board[nr][nc] != str[i]) continue;
			if (check(i + 1, nr, nc)) return true;
		}
	}
	return vis[r][c] = false;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N >> Q;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> board[i][j];

	while (Q--) {
		cin >> str;
		memset(vis, false, sizeof(vis));
		bool found = false;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] == str[0]) found = check(1, i, j);
				if (found) goto found;
			}
		}

		found:
		cout << (found ? "good puzzle!" : "bad puzzle!") << "\n";
	}

	return 0;
}