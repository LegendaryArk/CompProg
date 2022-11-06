#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> vii;

int N, sum, maxW;
vii adj[100005];

void dfs(int curr, int prev, int dist) {
	maxW = max(maxW, dist);
	for (pii e : adj[curr]) {
		int next = e.first, weight = e.second;
		if (next != prev) dfs(next, curr, dist + weight);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({ b, c });
		adj[b].push_back({ a, c });
		sum += c;
	}
	dfs(0, -1, 0);
	cout << 2 * sum - maxW << "\n";
}