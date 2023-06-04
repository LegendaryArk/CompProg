#include <bits/stdc++.h>
using namespace std;

const int MM = 2e5+5;
int N, M, K;
vector<pair<int, int>> q[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> K;
	while (K--) {
		int a, b, c;
		cin >> a >> b >> c;
		q[b].push_back({c, a});
	}
	for (int i = 1; i <= N; i++) {
		pair<int, int> mx = {-1, 0};
		for (int j = 0; j < q[i].size(); j++) {
			if (q[i][j].first > mx.first) mx = q[i][j];
		}
		cout << (q[i].size() == 0 ? -1 : mx.second) << " ";
	}
	cout << "\n";

	return 0;
}