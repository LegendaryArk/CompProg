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

int freq[26];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) freq[s[i] - 'A']++;

	int numOdd = 0;
	for (int i = 0; i < 26; i++) if (freq[i] % 2 == 1) numOdd++;
	if (numOdd > 1) { cout << "NO SOLUTION\n"; return 0; }

	int odd = -1;
	for (int i = 0; i < 26; i++) {
		if (freq[i] == 0) continue;
		if (freq[i] % 2 == 1) odd = i;
		int half = ceil(freq[i] / 2.0);
		while (freq[i] > half) {
			cout << (char) (i + 'A');
			freq[i]--;
		}
	}
	if (odd != -1) { cout << (char) (odd + 'A'); freq[odd]--; }
	for (int i = 25; i >= 0; i--) {
		if (freq[i] == 0) continue;
		while (freq[i] > 0) {
			cout << (char) (i + 'A');
			freq[i]--;
		}
	}
	cout << "\n";

	return 0;
}