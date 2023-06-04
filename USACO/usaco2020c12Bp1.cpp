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
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int nums[7];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	for (int i = 0; i < 7; i++) cin >> nums[i];
	sort(nums, nums + 7);
	int a = nums[0], b = nums[1], c = nums[6] - a - b;
	cout << a << " " << b << " " << c << "\n";

	return 0;
}