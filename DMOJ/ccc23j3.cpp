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

const int MM = 1e5+5;
int N, avail[5];
string a[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string p; cin >> p;
		a[i] = p;
	}

	int mx = 0;
	vi days;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < N; j++) {
			if (a[j][i] == 'Y') avail[i]++;
		}
		mx = max(mx, avail[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (avail[i] == mx) days.push_back(i + 1);
	}
	cout << days[0];
	for (int i = 1; i < days.size(); i++) {
		cout << "," << days[i];
	}
	cout << "\n";

	return 0;
}