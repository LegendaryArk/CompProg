#include <bits/stdc++.h>
using namespace std;

const vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	s += " ";
	for (int i = 0; i < s.size() - 1; i++) {
		cout << s[i];
		bool isVowel = find(vowels.begin(), vowels.end(), s[i]) != vowels.end();
		bool isNextVowel = find(vowels.begin(), vowels.end(), s[i + 1]) != vowels.end();
		if (isVowel == isNextVowel) cout << " ";
	}
	cout << "\n";

	return 0;
}