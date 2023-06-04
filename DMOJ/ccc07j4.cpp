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

string s1, s2;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	getline(cin, s1);
	getline(cin, s2);

	s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
	s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			cout << "Is not an anagram.\n";
			return 0;
		}
	}
	cout << "Is an anagram.\n";

	return 0;
}