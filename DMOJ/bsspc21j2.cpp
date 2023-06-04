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

int M, N;
vb mins(1441);

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> M;
	for (int i = 0, x, y; i < M; i++) {
		cin >> x >> y;
		for (int j = x; j <= y; j++) mins[j] = true;
	}

	cin >> N;
	for (int i = 0, a, b; i < N; i++) {
		cin >> a >> b;
		bool inClass = false;
		for (int j = a; j <= b; j++) {
			if (mins[j]) inClass = true;
		}
		if (inClass) cout << "Break is Over! Stop playing games! Stop watching Youtube!\n";
		else cout << ":eyy:\n";
	}

	return 0;
}
