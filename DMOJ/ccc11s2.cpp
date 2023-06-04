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

int N;
vector<char> ans;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		char a; cin >> a;
		ans.push_back(a);
	}

	int c = 0;
	for (int i = 0; i < N; i++) {
		char a; cin >> a;
		if (a == ans[i]) c++;
	}

	cout << c << "\n";

	return 0;
}