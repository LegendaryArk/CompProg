#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	char g[5][5] = {'G', 'G', 'G', 'G', 'G',
					'G', '.', '.', '.', '.',
					'G', '.', '.', 'G', 'G',
					'G', '.', '.', '.', 'G',
					'G', 'G', 'G', 'G', 'G'};

	for (int c = 0; c < 5; c++) {
		for (int i = 0; i < N; i++) {
			for (int r = 0; r < 5; r++) {
				for (int j = 0; j < N; j++) {
					cout << g[c][r];
				}
			}
			cout << "\n";
		}
	}

	return 0;
}