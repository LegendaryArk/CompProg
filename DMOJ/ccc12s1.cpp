#include <bits/stdc++.h>
using namespace std;

int J;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> J;

	int c = 0;
	for (int i = 1; i < J - 2; i++) {
		for (int j = i + 1; j < J - 1; j++) {
			for (int k = j + 1; k < J; k++) {
				c++;
			}
		}
	}

	cout << c << "\n";
}