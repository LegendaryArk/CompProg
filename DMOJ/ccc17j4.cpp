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
string t;

int count(int n) {
	t = "1200";
	int ans = 0;
	while (n--) {
		t = to_string(stoi(t) + 1);
		if (t.size() == 3) t = "0" + t;
		if (t[2] == '6') {
			t[2] = '0'; t[1]++;
			if (t[1] > '9') { t[1] = '0'; t[0]++; }
		}
		if (t > "1259") t = "0100";

		int diff = t[3] - t[2];
		if (t[2] - t[1] == diff) {
			if (t[0] == '0') ans++;
			else if (t[1] - t[0] == diff) ans++;
		}
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	int ans = (N / 720) * count(720) + count(N % 720);
	cout << ans << "\n";

	return 0;
}