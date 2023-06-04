#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MM = 3000 + 5;

int N;
vector<ll> a;
ll memo[MM][MM];

ll dp(int l, int r) {
	if (l == r) return a[l];
	if (memo[l][r] != -1) return memo[l][r];
	return memo[l][r] = max(-dp(l + 1, r) + a[l], -dp(l, r - 1) + a[r]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		ll n;
		cin >> n;
		a.push_back(n);
	}
	memset(memo, -1, sizeof(memo));

	cout << dp(0, N-1) << "\n";
}