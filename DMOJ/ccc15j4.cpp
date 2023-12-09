#include <bits/stdc++.h>
using namespace std;

int M;
vector<int> rT(101), tT(101, 0);
bool vis[101], waiting[101];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> M;
	int curT = -1;
	while (M--) {
		char c; int x;
		cin >> c >> x;

		curT++;
		if (c != 'W') vis[x] = true;
		if (c == 'R') {
			rT[x] = curT;
			waiting[x] = true;
		} else if (c == 'S') {
			tT[x] += curT - rT[x];
			rT[x] = 0;
			waiting[x] = false;
		} else curT += x - 2;
	}

	for (int i = 0; i < tT.size(); i++) {
		if (vis[i]) cout << i << " " << (waiting[i] ? -1 : tT[i]) << "\n";
	}

	return 0;
}