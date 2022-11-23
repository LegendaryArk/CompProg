#include <bits/stdc++.h>
using namespace std;

int indegree[8];
vector<int> adj[8];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	adj[1].push_back(7); indegree[7]++;
	adj[1].push_back(4); indegree[4]++;
	adj[2].push_back(1); indegree[1]++;
	adj[3].push_back(4); indegree[4]++;
	adj[3].push_back(5); indegree[5]++;
	int x = 1, y;
	while (x != 0) {
		cin >> x >> y;
		adj[x].push_back(y); indegree[y]++;
	}

	vector<int> tasks;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < 8; i++)
		if (indegree[i] == 0) q.push(i);
	
	while (!q.empty()) {
		int v = q.top();
		tasks.push_back(v);
		q.pop();

		for (int w : adj[v])
			if (--indegree[w] == 0) q.push(w);
	}

	if (tasks.size() == 7) {
		for (int t : tasks)
			cout << t << " ";
		cout << "\n";
	} else {
		cout << "Cannot complete these tasks. Going to bed.\n";
	}
}