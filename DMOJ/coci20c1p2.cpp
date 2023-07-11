#include <bits/stdc++.h>
using namespace std;

const int MM = 305;
int n, m;
string s, f;
int dp[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> s >> f;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				if (s[i] == f[j] && s[k] == f[j + 1] && k - 1 > 0 && k + 1 < n && (s[k - 1] == f[j] || s[k + 1] == f[j])) {
					int c = 0;
					dp[i][j] = min(dp[k][j + 1], c);
				}
			}
		}
	}

	return 0;
}