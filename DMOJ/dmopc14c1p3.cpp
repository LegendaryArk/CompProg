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

int I, N, sum = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << fixed << showpoint;
	cout << setprecision(3);

	cin >> I;
	for (int i = 0, a; i < I; i++) {
		cin >> a;
		sum += a;
	}
	cin >> N;
	for (int i = 1, a; i <= N; i++) {
		cin >> a;
		sum += a;
		cout << (sum / (double) (I + i)) << "\n";
	}

	return 0;
}