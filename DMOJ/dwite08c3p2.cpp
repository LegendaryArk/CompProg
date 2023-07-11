#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; i++) {
		getline(cin, s);
		vector<string> words(1);
		for (int j = 0, k = 0; j < s.size(); j++) {
			if ((s[j] - 'a' >= 0 && s[j] - 'z' < 0) || (s[j] - 'A' >= 0 && s[j] - 'Z' < 0)) words[k] += s[j];
			else {
				k++;
				words.emplace_back("");
			}
		}

		int c = 0;
		for (string& word : words) {
			if (word.size() > 3) c++;
		}
		cout << c << "\n";
	}

	return 0;
}