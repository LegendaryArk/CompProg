#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int B; cin >> B;
	int batches[B][3];
	for (int i = 0; i < B; i++) {
		int f, e, p; cin >> f >> e >> p;
		batches[i][0] = f;
		batches[i][1] = e;
		batches[i][2] = p;
	}
	int F; cin >> F;
	int failed[F];
	for (int i = 0; i < F; i++) {
		int t; cin >> t;
		failed[i] = t;
	}

	sort(failed, failed + F);

	ll c = 0;
	for (auto [f, e, p] : batches) {
		ll n = upper_bound(failed, failed + F, e) - lower_bound(failed, failed + F, f);
		if (n == 0) c += p;
	}

	cout << c << "\n";

	return 0;
}