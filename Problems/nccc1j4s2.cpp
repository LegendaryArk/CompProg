#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	bool isLatin = true, isReduced = true;

	cin >> N;
	char sq[N][N];
	for (int r = 0; r < N; r++) {
		set<char> rpt;
		for (int c = 0; c < N; c++) {
			char n; cin >> n;
			sq[r][c] = n;
			rpt.insert(n);
		}
		if (rpt.size() < N) isLatin = false;
	}
	if (isLatin) {
		for (int i = 1; i < N; i++) {
			if (sq[0][i] < sq[0][i-1] || sq[i][0] < sq[i-1][0]) {
				isReduced = false;
				break;
			}
		}
	} else isReduced = false;

	if (isReduced) cout << "Reduced\n";
	else if (isLatin) cout << "Latin\n";
	else cout << "No\n";
}