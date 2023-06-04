#include <bits/stdc++.h>
using namespace std;

int K, m;
vector<int> friends;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> K >> m;
	for (int i = 1; i <= K; i++) friends.push_back(i);

	for (int i = 0, r; i < m; i++) {
		cin >> r;
		vector<int> temp;
		for (int j = 1; j <= friends.size(); j++)
			if (j % r != 0) temp.push_back(friends[j - 1]);
		friends.clear();
		friends = temp;
	}
	for (int n : friends) cout << n << "\n";
}