#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int N;
bool comp[22][22];

long memo[22][1 << 22];

int count(int m, int mask) {
	if (m == N) return 1;
	if (memo[m][mask] != -1) return memo[m][mask];

	memo[m][mask] = 0;
	for (int w = 0; w < N; w++) {
		if (comp[m][w] && (mask & (1 << w))) {
			memo[m][mask] += count(m + 1, mask - (1 << w));
			memo[m][mask] %= MOD;
		}
	}

	return memo[m][mask];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> comp[i][j];
		}
	}
	memset(memo, -1, sizeof(memo));

	cout << count(0, (1 << N) - 1) << "\n";
}