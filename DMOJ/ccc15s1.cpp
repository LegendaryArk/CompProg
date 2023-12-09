#include <bits/stdc++.h>
using namespace std;

int K, n;
stack<int> q;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> K;
	while (K--) {
		cin >> n;
		if (n == 0) q.pop();
		else q.push(n);
	}

	int ans = 0;
	while (!q.empty()) { ans += q.top(); q.pop(); }
	cout << ans << "\n";

	return 0;
}