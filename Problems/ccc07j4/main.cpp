#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	 s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
	 s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			cout << "Is not an anagram.\n";
			return 0;
		}
	}
	cout << "Is an anagram.\n";
}