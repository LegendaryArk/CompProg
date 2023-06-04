#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int N, M;
vector<pii> queens;

bool vertical(int x) {
	for (pii queen : queens)
		if (queen.first == x) return true;
	return false;
}
bool horizontal(int y) {
	for (pii queen : queens)
		if (queen.second == y) return true;
	return false;
}
bool diagonal(int x, int y) {
	for (pii queen : queens)
		if (abs(queen.first - x) == abs(queen.second - y)) return true;
	return false;
}

bool isReachable(int x, int y) {
	return vertical(x) || horizontal(y) || diagonal(x, y);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		queens.push_back({ --x, --y });
	}

	int total = 0;
	for (int c = 0; c < N; c++) {
		for (int r = 0; r < N; r++) {
			if (!isReachable(r, c)) total++;
		}
	}

	cout << total << "\n";
}