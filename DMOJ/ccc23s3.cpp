#include <bits/stdc++.h>
using namespace std;

const int MM = 2005;
int n, m, r, c;
char mp[MM][MM];

bool isEven(int a) {
	return (a & 1) == 0;
}

void setCol(int a, char b) {
	for (int i = 1; i <= n; i++) mp[i][a] = b;
}
void setRow(int a, char b) {
	for (int i = 1; i <= m; i++) mp[a][i] = b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> r >> c;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i <= r || j <= c) mp[i][j] = 'a';
			else mp[i][j] = 'b';
		}
	}

	bool flipped = false;
	if (c == 0 || c == n) {
		flipped = true;
		swap(r, c);
		swap(n, m);
	}
	if (r == 0) {
		for (int i = 1; i <= m - 1; i++) {
			setCol(i, 'a');
		}
		setCol(m, 'b');

		for (int i = 0; i <= m - c; i++) {
			mp[n][i] = 'c';
		}
		if (c == 0) mp[n][1] = 'd';
	} else if (r == n) {
		memset(mp, 'a', sizeof(mp));

		if (isEven(m) && !isEven(c)) { cout << "IMPOSSIBLE\n"; return 0; }

		if (c != m) {
			for (int i = 1; i <= (m - c) / 2; i++) {
				mp[1][i] = mp[1][m - i + 1] = 'b';
			}
			if (isEven(c)) mp[1][m / 2 + 1] = 'b';
		}
	}

	if (flipped) swap(n, m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << mp[i][j];
		}
		cout << "\n";
	}


	return 0;
}