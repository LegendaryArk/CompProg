#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int M, N, K;
	cin >> M >> N >> K;
	vector<bool> rows(M), cols(N);
	for (int i = 0; i < K; i++) {
		char dir;
		int n;
		cin >> dir >> n;
		n--;
		if (dir == 'R') rows[n] = !rows[n];
		else cols[n] = !cols[n];
	}

	int total = 0;
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			if (rows[r] != cols[c]) total++;
		}
	}
	cout << total << "\n";
}