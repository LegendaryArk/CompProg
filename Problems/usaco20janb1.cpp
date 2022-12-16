#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<string> strs;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	while (N--) {
		string s; cin >> s;
		strs.push_back(s);
	}

	int currLen = 0;
	for (int i = 0; i < strs.size(); i++) {
		string s = strs[i];
		currLen += s.size();
		if (currLen > K) {
			cout << "\n" << s;
			currLen = s.size();
		} else {
			if (i > 0) cout << " ";
			cout << s;
		}
	}
	cout << "\n";
}