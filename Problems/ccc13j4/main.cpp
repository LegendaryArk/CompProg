#include <bits/stdc++.h>
using namespace std;

int T, C, maxim = 0;
vector<int> chores;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> T >> C;
	for (int i = 0, c; i < C; i++) {
		cin >> c;
		chores.push_back(c);
	}
	sort(chores.begin(), chores.end());
	int c = 0;
	while (T >= 0) {
		T -= chores[c++];
	}

	cout << c - 1 << "\n";
}