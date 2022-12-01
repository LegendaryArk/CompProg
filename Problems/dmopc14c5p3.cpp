#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> S;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0, s; i < N; i++) {
		cin >> s;
		S.push_back(s);
	}

	int maxLen = 0;
	for (int i = 0; i < S.size() - 1; i++) {
		int currMax = 1;
		for (int j = i + 1; j < S.size(); j++) {
			if (abs(S[j] - S[j - 1]) <= 2) currMax++;
			else break;
		}
		maxLen = max(maxLen, currMax);
	}
	cout << maxLen << "\n";
}