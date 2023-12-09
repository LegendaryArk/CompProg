#include <bits/stdc++.h>
using namespace std;

const int MM = 5e6+5;
int m, n, k;
bool rows[MM], cols[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		char dir; int a; cin >> dir >> a;
		if (dir == 'R') rows[a] = !rows[a];
		else cols[a] = !cols[a];
	}

	int total = 0;
	for (int r = 1; r <= m; r++) {
		for (int c = 1; c <= n; c++) {
			if (rows[r] != cols[c]) total++;
		}
	}
	cout << total << "\n";
}