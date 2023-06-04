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

int X, N;
vp soups;

bool cmp(pii a, pii b) {
	return a.f < b.f;
}

bool hasFresh(int m) {
	for (int i = 0; i < N; i++) if (m <= soups[i].s) return true;
	return false;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> X >> N;
	for (int i = 0, T, F; i < N; i++) {
		cin >> T >> F;
		soups.emplace_back(T, F);
	}
	sort(soups.begin(), soups.end(), cmp);

	priority_queue<int, vi, greater<>> q;

	int m = 0, c = 0;
	while (!q.empty() || !soups.empty()) {
		m++;
		int n = 0;
		for (auto& [T, F] : soups) {
			if (--T <= X) {
				q.push(F);
				n++;
			}
		}
		soups.erase(soups.begin(), soups.begin()+n);
//		cout << soups[i].first << "\n";

		while (!q.empty() && m > q.top()) q.pop();
		if (!q.empty()) {
			q.pop();
			c++;
		}

		if (!hasFresh(m)) break;
	}
	cout << c << "\n";

	return 0;
}
