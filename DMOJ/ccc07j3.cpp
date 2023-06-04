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

int n;
int briefcases[] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		briefcases[a - 1] = 0;
	}
	int offer; cin >> offer;

	int sum = 0, num0 = 0;
	for (int i = 0; i < 10; i++) {
		sum += briefcases[i];
		if (briefcases[i] == 0) num0++;
	}
	double avg = sum / (10 - num0);

	cout << (offer > avg ? "deal\n" : "no deal\n");

	return 0;
}