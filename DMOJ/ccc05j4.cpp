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

const int MM = 21;
enum dir {u, d, l, r, none};
int w, h, cw, ch, t;
bool mp[MM][MM];

dir changeDir(int x, int y, dir direct) {
	switch (direct) {
		case r:
		if (x > 0 && x <= w && y > 1 && y <= H && !mp[y - 1][x]) return u;
		if (x > 0 && x < w && y > 0 && y <= H && !mp[y][x + 1]) return r;
		if (x > 0 && x <= w && y > 0 && y < H && !mp[y + 1][x]) return d;
		break;
		case l:
		if (x > 0 && x <= w && y > 0 && y < H && !mp[y + 1][x]) return d;
		if (x > 1 && x <= w && y > 0 && y <= H && !mp[y][x - 1]) return l;
		if (x > 0 && x <= w && y > 1 && y <= H && !mp[y - 1][x]) return u;
		break;
		case u:
		if (x > 1 && x <= w && y > 0 && y <= H && !mp[y][x - 1]) return l;
		if (x > 0 && x <= w && y > 1 && y <= H && !mp[y - 1][x]) return u;
		if (x > 0 && x < w && y > 0 && y <= H && !mp[y][x + 1]) return r;
		break;
		case d:
		if (x > 0 && x < w && y > 0 && y <= H && !mp[y][x + 1]) return r;
		if (x > 0 && x <= w && y > 0 && y < H && !mp[y + 1][x]) return d;
		if (x > 1 && x <= w && y > 0 && y <= H && !mp[y][x - 1]) return l;
		break;
	}
	return none;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> w >> H >> cw >> ch >> t;
	memset(mp, true, sizeof(mp));
	for (int i = 1; i <= H; i++)
		for (int j = 1; j <= w; j++)
			if ((i > ch && i <= H - ch) || (j > cw && j <= w - cw))
				mp[i][j] = false;

	int x = cw + 1, y = 1, c = 1;
	dir nw, cur = r;

	mp[y][x] = true;
	while (c <= t) {
		nw = changeDir(x, y, cur);
		if (nw == none) break;
		if (nw != cur) { cur = nw; continue; }

		if (cur == r) x++;
		else if (cur == l) x--;
		else if (cur == u) y--;
		else if (cur == d) y++;

		mp[y][x] = c++;
	}

	cout << x << "\n" << y << "\n";

	return 0;
}