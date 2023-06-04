#include <bits/stdc++.h>
using namespace std;

const int MM = 300 + 5;

int N, freq[3];
double memo[MM][MM][MM];

double dp(int i, int j, int k) {
	if ((i + j + k) == 0) return 0;
	if (memo[i][j][k] != 0) return memo[i][j][k];

	memo[i][j][k] = 1;
	if (i > 0)
		memo[i][j][k] += i / (double) N * dp(i - 1, j, k);
	if (j > 0)
		memo[i][j][k] += j / (double) N * dp(i + 1, j - 1, k);
	if (k > 0)
		memo[i][j][k] += k / (double) N * dp(i, j + 1, k - 1);
	return memo[i][j][k] /= (i + j + k) / (double) N;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(17);

	cin >> N;
	for (int i = 0, a; i < N; i++) {
		cin >> a;
		freq[--a]++;
	}
	cout << dp(freq[0], freq[1], freq[2]) << "\n";
}