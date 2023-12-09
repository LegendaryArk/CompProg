#include <bits/stdc++.h>

using namespace std;

int H, M, timeTaken, distLeft = 240;

bool inRushTime(int h, int m) {
	int t = h * 60 + m;
	if (t > 7 * 60 && t < 10 * 60) return true;
	else if (t > 15 * 60 && t < 19 * 60) return true;
	return false;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	char c;
	cin >> H >> c >> M;

	while (distLeft > 0) {
		M++;
		if (inRushTime(H, M)) distLeft--;
		else distLeft -= 2;

		if (M == 60) { M = 0; H++; }
		if (H == 24) H = 0;
	}

	if (H < 10) cout << "0";
	cout << H << ":";
	if (M == 0) cout << "00\n";
	else cout << M << "\n";

	return 0;
}