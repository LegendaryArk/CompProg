#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; getline(cin, s);
	int freq[s.size() + 1][26]; memset(freq, 0, sizeof(freq));
	for (int i = 1; i <= s.size(); i++) {
		for (int j = 0; j < 26; j++) {
			freq[i][j] = freq[i - 1][j];
		}

		if (s[i - 1] == ' ') continue;
		freq[i][s[i - 1] - 'a']++;
	}

	int q; cin >> q;
	while (q--) {
		int i, j; cin >> i >> j;
		char c; cin >> c;
		cout << freq[j][c - 'a'] - freq[i - 1][c - 'a'] << "\n";
	}

	return 0;
}