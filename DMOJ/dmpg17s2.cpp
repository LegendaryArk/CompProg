#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+2;
int N, Q, p[MM];

int find(int d) {
	return (d == p[d] ? p[d] : p[d] = find(p[d]));
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> Q;
	for (int i = 1; i <= N; i++) p[i] = i;
	for (int i = 1; i <= Q; i++) {
		char op; int u, v;
		cin >> op >> u >> v;

		if (op == 'A') p[find(u)] = find(v);
		else cout << (find(u) == find(v) ? "Y\n" : "N\n");
	}

	return 0;
}