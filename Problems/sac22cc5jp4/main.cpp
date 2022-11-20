#include <bits/stdc++.h>
using namespace std;

const int MM = 2e5 + 5;

int N;
vector<int> adj[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	vector<int> in(N + 1);
	for (int i = 1, c; i <= N; i++) {
		cin >> c;
		for (int j = 0, p; j < c; j++) {
			cin >> p;
			adj[p].push_back(i);
			in[i]++;
		}
	}

	vector<int> order;
	queue<int> q;
	for (int i = 1; i <= N; i++) if (in[i] == 0) q.push(i);
	while (!q.empty()) {
		int v = q.front(); q.pop();
		order.push_back(v);

		for (int w : adj[v]) {
			if (--in[w] == 0) q.push(w);
		}
	}

	for (int n : order) cout << n << " ";
	cout << "\n";
}