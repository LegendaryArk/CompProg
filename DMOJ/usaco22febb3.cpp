#include <bits/stdc++.h>
using namespace std;

int N;
array<string, 4> blocks;
string word;

bool check() {
	do {
		bool fail = false;
		for (int i = 0; i < word.size(); i++) {
			if (find(blocks[i].begin(), blocks[i].end(), word[i]) == blocks[i].end()) fail = true;
		}
		if (!fail) return true;
	} while (next_permutation(blocks.begin(), blocks.end()));
	return false;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < 4; i++) cin >> blocks[i];
	sort(blocks.begin(), blocks.end());

	while (N--) {
		cin >> word;
		if(check()) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}