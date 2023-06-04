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
int N, X, A[MM];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> A[i];

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int tmp[3] = {A[i], A[j], A[k]};
				sort(tmp, tmp + 3);
				if (tmp[1] == X) ans++;
			}
		}
	}
	cout << ans << "\n";

	return 0;
}