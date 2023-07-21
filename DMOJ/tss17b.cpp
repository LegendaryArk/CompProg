#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, Q; cin >> N >> Q;

	long double dists[N];
	for (int i = 0; i < N; i++) {
		ll x, y; cin >> x >> y;
		dists[i] = sqrt(x * x + y * y);
	}

	sort(dists, dists + N);

	while (Q--) {
		int r; cin >> r;
		cout << upper_bound(dists, dists + N, r) - dists << "\n";
	}

	return 0;
}