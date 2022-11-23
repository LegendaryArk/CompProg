#include <bits/stdc++.h>
#define MOD 1e9+7
using namespace std;
typedef long long int lli;

vector<int> caps[101];
int dp[(1 << 10) + 1][101];

int n;

int getBits(int size) {
	return (1 << size) - 1;
}

lli isSet(int bits, int pos) {
	return bits & (1 << pos);
}

lli setBit(int bits, int pos, int val) {
	if (!val) return bits & ~(1 << pos);
	return bits | (1 << pos);
}

int count(int bits, int i) {
	// Every person has a cap
	if (bits == getBits(n)) return 1;
	// Not everyone can have a cap
	if (i > 100) return 0;
	// Subset solved already
	if (dp[bits][i] != -1) return dp[bits][i];

	lli ways = count(bits, i + 1);
	for (int p : caps[i]) {
		// Current person is already wearing a cap
		if (isSet(bits, p)) continue;
		// Calculate the arrangement with current person getting the i + 1 cap
		ways += count(setBit(bits, p, 1), i + 1);
		// In case of values > 1e9+7
		ways = fmod(ways, MOD);
	}

	// Save to dp array
	return dp[bits][i] = ways;
}

int main() {
	cin >> n;
	string str;
	getline(cin, str);
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		int id;
		stringstream ss(str);
		while (ss >> id) caps[id].push_back(i);
	}

	memset(dp, -1, sizeof(dp));

	cout << count(0, 1) << "\n";
}