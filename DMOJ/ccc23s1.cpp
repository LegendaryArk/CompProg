#include <bits/stdc++.h>

using namespace std;

const int MM = 2e5+5;
int C;
bool l[2][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> C;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= C; j++) {
			int a; cin >> a;
			l[i][j] = a;
		}
	}

	int ans = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= C; j++) {
			if (!l[i][j]) continue;

			ans += 3;
			if (l[i][j - 1]) ans--;
			if (l[i][j + 1]) ans--;
			if (j % 2 == 1 && l[!i][j]) ans--;
		}
	}
	cout << ans << "\n";

	return 0;
}