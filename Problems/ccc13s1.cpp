#include <bits/stdc++.h>
using namespace std;

int Y;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> Y;
	while (true) {
		Y++;

		set<int> digits;
		int n = Y;
		int d = 0;
		while (n > 0) { digits.insert(n % 10); n /= 10; d++; }

		if (digits.size() == d) {
			cout << Y << "\n";
			break;
		}
	}
}