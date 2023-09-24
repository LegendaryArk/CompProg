#include <bits/stdc++.h>
using namespace std;

int xi, yi, xf, yf, dist[8][8];
bool visited[8][8];
pair<int, int> moves[8] = {{-1, 2},
	                        {1, 2},
	                        {-1, -2},
	                        {1, -2},
	                        {-2, 1},
	                        {-2, -1},
	                        {2, 1},
	                        {2, -1}};

bool isInRange(int n) { return (n >= 0 && n <= 7); }

void bfs() {
	queue<pair<int, int>> q;
	q.emplace(xi, yi);
	visited[xi][yi] = true;
	dist[xi][yi] = 0;

	while (!q.empty()) {
		auto& [x, y] = q.front(); q.pop();

		if (x == xf && y == yf) return;

		for (auto& [a, b] : moves) {
			if (isInRange(x + a) && isInRange(y + b) && !visited[x + a][y + b]) {
				q.emplace(x + a, y + b);
				visited[x + a][y + b] = true;
				dist[x + a][y + b] = dist[x][y] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> xi >> yi >> xf >> yf;
	xi--; yi--; xf--; yf--;

	bfs();
	cout << dist[xf][yf] << "\n";

	return 0;
}