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

int t;
string s;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		remove(s.begin(), s.end(), '-');
		if (s.size() > 10) s = s.substr(0, 10);

		for (int j = 0; j < s.size(); j++) {
			if (s[j] - 'A' < 0 || s[j] - 'A' > 25) continue;

			if (s[j] == 'A' || s[j] == 'B' || s[j] == 'C') s[j] = '2';
			else if (s[j] == 'D' || s[j] == 'E' || s[j] == 'F') s[j] = '3';
			else if (s[j] == 'G' || s[j] == 'H' || s[j] == 'I') s[j] = '4';
			else if (s[j] == 'J' || s[j] == 'K' || s[j] == 'L') s[j] = '5';
			else if (s[j] == 'M' || s[j] == 'N' || s[j] == 'O') s[j] = '6';
			else if (s[j] == 'P' || s[j] == 'Q' || s[j] == 'R' || s[j] == 'S') s[j] = '7';
			else if (s[j] == 'T' || s[j] == 'U' || s[j] == 'V') s[j] = '8';
			else if (s[j] == 'W' || s[j] == 'X' || s[j] == 'Y' || s[j] == 'Z') s[j] = '9';
		}

		cout << s.substr(0, 3) << "-" << s.substr(3, 3) << "-" << s.substr(6) << "\n";
	}

	return 0;
}