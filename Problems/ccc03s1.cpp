#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int pos = 1;
	while (pos < 100) {
		cin >> n;
		if (n == 0) { cout << "You Quit!\n"; break; }

		pos += n;
		if (pos > 100) pos -= n;
		else if (pos == 54) pos = 19;
		else if (pos == 90) pos = 48;
		else if (pos == 99) pos = 77;
		else if (pos == 9) pos = 34;
		else if (pos == 40) pos = 64;
		else if (pos == 67) pos = 86;

		cout << "You are now on square " << pos << "\n";
		if (pos == 100) cout << "You Win!\n";
	}
}