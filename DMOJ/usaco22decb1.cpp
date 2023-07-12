#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	ll c[N];
	for (int i = 0; i < N; i++) cin >> c[i];

	sort(c, c + N);

	ll maxMoney = 0, maxTuition = 0;
	int numCows = N;
	for (int i = 0; i < N; i++) {
		ll money = c[i] * numCows;
		if (money > maxMoney) {
			maxMoney = money;
			maxTuition = c[i];
		}
		numCows--;
	}

	cout << maxMoney << " " << maxTuition << "\n";

	return 0;
}