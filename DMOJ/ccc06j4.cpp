#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<pii> vp;

#define f first
#define s second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int indeg[8];
vi adj[8];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	adj[1].push_back(7); indeg[7]++;
	adj[1].push_back(4); indeg[4]++;
	adj[2].push_back(1); indeg[1]++;
	adj[3].push_back(4); indeg[4]++;
	adj[3].push_back(5); indeg[5]++;
	int x = 1, y;
	while (x != 0) {
		cin >> x >> y;
		adj[x].push_back(y); indeg[y]++;
	}

	vector<int> tasks;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < 8; i++)
		if (indeg[i] == 0) q.push(i);

	while (!q.empty()) {
		int v = q.top();
		tasks.push_back(v);
		q.pop();

		for (int w : adj[v])
			if (--indeg[w] == 0) q.push(w);
	}

	if (tasks.size() == 7) {
		for (int t : tasks)
			cout << t << " ";
		cout << "\n";
	} else {
		cout << "Cannot complete these tasks. Going to bed.\n";
	}

	return 0;
}