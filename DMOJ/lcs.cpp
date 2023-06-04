#include <bits/stdc++.h>
using namespace std;

const int MM = 1005;
int N, M;
vector<int> n1(MM), n2(MM);
int dp[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= N; i++) cin >> n1[i];
	for (int i = 1; i <= M; i++) cin >> n2[i];

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= M; j++) {
			if (i == 0 || j == 0) { dp[i][j] = 0; continue; }

			if (n1[i] == n2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	cout << dp[N][M] << "\n";
}