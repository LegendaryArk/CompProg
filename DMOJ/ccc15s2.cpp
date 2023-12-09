#include <bits/stdc++.h>
using namespace std;

int J, A, ans = 0;
vector<int> jerseys;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> J >> A;
	while (J--) {
		char j;
		cin >> j;
		if (j == 'S') jerseys.push_back(0);
		else if (j == 'M') jerseys.push_back(1);
		else jerseys.push_back(2);
	}

	while (A--) {
		char c; int s, a;
		cin >> c >> a;
		a--;
		if (c == 'S') s = 0;
		else if (c == 'M') s = 1;
		else s = 2;

		if (jerseys[a] != -1 && jerseys[a] >= s) { jerseys[a] = -1; ans++; }
	}

	cout << ans << "\n";

	return 0;
}