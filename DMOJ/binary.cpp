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

int N;
int n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		cout << n << "\n";
		if (n == 0) { cout << "0000\n"; continue; }

		int digits = log2(n) + 1;
		int bin[4 * (int) ceil(digits / 4.0)];
		for (int j = digits; j >= 0; j--) {
			if (n > pow(2, j)) {
				n -= pow(2, j);
				bin[j] = 1;
			} else bin[j] = 0;
		}

		for (int j = digits; j >= 0; j--) {
			cout << bin[j];
			if (j % 4 == 0) cout << " ";
		}
		cout << "\n";
	}

	return 0;
}