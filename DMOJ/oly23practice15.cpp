#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int MM = 1005;
int R, C;
bool mp[MM][MM];

void dfs(int x, int y) {
	if (!mp[x][y]) return;

	mp[x][y] = false;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (i == 0 && j == 0) continue;
			dfs(x + i, y + j);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			int a; cin >> a;
			mp[i][j] = a > 0;
		}
	}

	int c = 0;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (mp[i][j]) {
				c++;
				dfs(i, j);
			}
		}
	}
	cout << c << "\n";

	return 0;
}