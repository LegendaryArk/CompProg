#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	int c = 0;
	for (int i = 0; i <= n / 4; i++) {
		if ((n - i * 4) % 5 == 0) c++;
	}

	cout << c << "\n";

	return 0;
}