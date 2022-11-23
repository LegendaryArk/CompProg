#include <bits/stdc++.h>
using namespace std;

int k;
char icon[3][3] = {{'*', 'x', '*'},
					{' ', 'x', 'x'},
					{'*', ' ', '*'}};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> k;

	for (int i = 0; i < 3; i++) {
		for (int r = 0; r < k; r++) {
			for (int j = 0; j < 3; j++) {
				for (int c = 0; c < k; c++) cout << icon[i][j];
			}
			cout << "\n";
		}
	}
}