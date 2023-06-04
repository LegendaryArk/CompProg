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

char dir; int l;
bool mp[201][401];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	mp[1][200] = true;
	mp[2][200] = true;
	mp[3][200] = true;
	mp[3][201] = true;
	mp[3][202] = true;
	mp[3][203] = true;
	mp[4][203] = true;
	mp[5][203] = true;
	mp[5][204] = true;
	mp[5][205] = true;
	mp[4][205] = true;
	mp[3][205] = true;
	mp[3][206] = true;
	mp[3][207] = true;
	mp[4][207] = true;
	mp[5][207] = true;
	mp[6][207] = true;
	mp[7][207] = true;
	for (int i = 199; i <= 207; i++) mp[7][i] = true;
	mp[6][199] = true;
	mp[5][199] = true;

	int x = 199, y = 5;
	while (true) {
		cin >> dir >> l;
		if (dir == 'q') break;

		bool danger = false;
		if (dir == 'd') {
			for (int i = 0; i < l; i++) {
				y++;
				if (mp[y][x]) danger = true;
				mp[y][x] = true;
			}
		} else if (dir == 'u') {
			for (int i = 0; i < l; i++) {
				y--;
				if (mp[y][x]) danger = true;
				mp[y][x] = true;
			}
		} else if (dir == 'l') {
			for (int i = 0; i < l; i++) {
				x--;
				if (mp[y][x]) danger = true;
				mp[y][x] = true;
			}
		} else {
			for (int i = 0; i < l; i++) {
				x++;
				if (mp[y][x]) danger = true;
				mp[y][x] = true;
			}
		}
		cout << x - 200 << " " << -y << (danger ? " DANGER\n" : " safe\n");

		if (danger) break;
	}

	return 0;
}