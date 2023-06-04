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

const int MM = 105;
int n, m;
char letter[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int h = 0; h < n; h++) {
		for (int w = 0; w < m; w++) {
			cin >> letter[h][w];
			if (letter[h][w - 1] == '#' || letter[h - 1][w] == '#' || letter[h - 1][w - 1] == '#') cout << '#';
			else cout << letter[h][w];
		}
		cout << "\n";
	}

	return 0;
}