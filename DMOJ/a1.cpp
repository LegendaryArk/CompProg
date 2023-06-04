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

const ll MOD = 1e9+7;
const ll INF = 1e18;
const double PI = acos((double)-1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int N, M;
string s;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> M;
		getline(cin, s);
		s = s.substr(1);
		cout << i << " ";
		for (int j = 0; j < M - 1; j++) cout << s[j];
		for (int j = M; j < s.size(); j++) cout << s[j];
		cout << "\n";
	}

    return 0;
}
