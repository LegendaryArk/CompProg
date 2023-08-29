#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int mn = 1e6, c = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a < mn) { c++; mn = a; }
	}

	cout << c << "\n";

	return 0;
}