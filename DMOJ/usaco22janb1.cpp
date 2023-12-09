#include <bits/stdc++.h>
using namespace std;

char ans[3][3], guess[3][3];
int freqA[26], freqG[26];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> ans[i][j];
			freqA[ans[i][j] - 'A']++;
		}
	}

	int cG = 0, cY = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> guess[i][j];
			freqG[guess[i][j] - 'A']++;

			if (guess[i][j] == ans[i][j]) cG++;
		}
	}
	for (int i = 0; i < 26; i++) cY += min(freqA[i], freqG[i]);

	cY -= cG;
	cout << cG << "\n" << cY << "\n";

	return 0;
}