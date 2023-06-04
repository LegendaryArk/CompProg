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

int N;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> N; cin.ignore();
	for (int i = 0; i < N; i++) {
		string poem[4], ends[4];
		getline(cin, poem[0]);
		getline(cin, poem[1]);
		getline(cin, poem[2]);
		getline(cin, poem[3]);

		for (int j = 0; j < 4; j++) {
			for (int k = poem[j].length() - 1; k >= 0; k--) {
				poem[j][k] = tolower(poem[j][k]);
				if (poem[j][k] == ' ') { ends[j] = poem[j].substr(k + 1); break; }
				if (poem[j][k] == 'a' || poem[j][k] == 'e' || poem[j][k] == 'i' || poem[j][k] == 'o' || poem[j][k] == 'u') {
					ends[j] = poem[j].substr(k);
					break;
				}
			}
		}

		if (ends[0] == ends[1] && ends[1] == ends[2] && ends[2] == ends[3]) cout << "perfect\n";
		else if (ends[0] == ends[1] && ends[2] == ends[3]) cout << "even\n";
		else if (ends[0] == ends[2] && ends[1] == ends[3]) cout << "cross\n";
		else if (ends[0] == ends[3] && ends[1] == ends[2]) cout << "shell\n";
		else cout << "free\n";
	}

	return 0;
}