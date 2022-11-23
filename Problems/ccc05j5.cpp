#include <bits/stdc++.h>
using namespace std;

string word;

bool isMonkeyWord(string s) {
	if (s == "") return false;
	if (s == "A") return true;

	if (s[0] == 'B' && s[s.size() - 1] == 'S')
		if (isMonkeyWord(s.substr(1, s.size() - 2))) return true;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'N')
			if (isMonkeyWord(s.substr(0, i)) && isMonkeyWord(s.substr(i + 1))) return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> word;
	while (word != "X") {
		cout << (isMonkeyWord(word) ? "YES\n" : "NO\n");
		
		cin >> word;
	}
}