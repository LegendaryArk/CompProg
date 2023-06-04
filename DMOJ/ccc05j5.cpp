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

string word;

bool isMonkeyWord(string s) {
	if (s == "") return false;
	if (s == "A") return true;

	if (s[0] == 'B' && s[s.size() - 1] == 'S')
		if (isMonkeyWord(s.substr(1, s.size() - 2))) return true;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'N')
			if (isMonkeyWord(s.substr(0, i)) && isMonkeyWord(s.substr(i + 1))) return true;
	}
	return false;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> word;
	while (word != "X") {
		cout << (isMonkeyWord(word) ? "YES\n" : "NO\n");

		cin >> word;
	}

	return 0;
}