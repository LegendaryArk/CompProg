#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int p[n];
	for (int i = 0; i < n; i++) cin >> p[i];

	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			double sum = 0;
			for (int k = i; k <= j; k++) sum += p[k];

			double avg = sum / (j - i + 1);
			bool hasAvg = false;
			for (int k = i; k <= j; k++) if (p[k] == avg) hasAvg = true;

			if (hasAvg) c++;
		}
	}

	cout << c << "\n";

	return 0;
}