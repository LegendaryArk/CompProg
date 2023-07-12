#include <bits/stdc++.h>
using namespace std;

int R, C, Q;
vector<pair<int, int>> q;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			char c; cin >> c;
			if (c == 'X') q.emplace_back(j, i);
		}
	}

	cin >> Q;
	while (Q--) {
		int x, y; cin >> x >> y;
		bool canSee = false;
		for (auto& [X, Y] : q) {
			if (X == x || Y == y) {
				cout << "Y\n";
				canSee = true;
				break;
			}
		}
		if (!canSee) cout << "N\n";
	}

	return 0;
}