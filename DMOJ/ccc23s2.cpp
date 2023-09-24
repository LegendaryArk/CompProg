#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MM = 5005;
int N, h[MM], pre[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> h[i];

	for (int i = 0; i < N; i++) {
		int l = 0, r = i, mn = INT32_MAX;
		while (r < N) {
			pre[l][r] = pre[l + 1][r - 1] + abs(h[l] - h[r]);
			mn = min(mn, pre[l][r]);
			l++; r++;
		}
		cout << mn << " ";
	}
	cout << "\n";

	return 0;
}