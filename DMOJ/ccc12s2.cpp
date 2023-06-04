#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;

	int total = 0;
	int preBase = 0, preVal = 0;
	for (int i = 0; i < s.size(); i+=2) {
		int a = s[i] - 48, r;
		if (s[i+1] == 'I') r = 1;
		else if (s[i+1] == 'V') r = 5;
		else if (s[i+1] == 'X') r = 10;
		else if (s[i+1] == 'L') r = 50;
		else if (s[i+1] == 'C') r = 100;
		else if (s[i+1] == 'D') r = 500;
		else r = 1000;

		total += a * r;
		if (r > preBase) total -= 2 * preVal;

		preBase = r, preVal = a * r;
	}

	cout << total << "\n";
}