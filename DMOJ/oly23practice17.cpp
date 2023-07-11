#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
const int MOD = 1e9+7;
int N, K, dp[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		if (i == 0) dp[i] = 2;
		else if (i <= K) dp[i] = dp[i - 1] + 1;
		else dp[i] = dp[i - 1] + dp[i - K - 1];
		dp[i] %= MOD;
	}

	cout << dp[N - 1] << "\n";

	return 0;
}