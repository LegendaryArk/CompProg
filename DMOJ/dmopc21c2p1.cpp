#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MM = 1e6+5;
ll N, H, P, a[MM], sum;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> H >> P;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
		sum += a[i];
	}

	sort(a + 1, a + N + 1);

	ll mn = sum * P;
	for (int i = 1; i <= N; i++) {
		sum -= a[i];
		mn = min(mn, a[i] * H + (sum - a[i] * (N - i)) * P);
	}

	cout << mn << "\n";

	return 0;
}