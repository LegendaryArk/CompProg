#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> seq(N);
	vector<int> medians(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> seq[j];
		}
		sort(seq.begin(), seq.end());
		medians[i] = seq[ceil((N - 1) / 2.0)];
	}

	sort(medians.begin(), medians.end());
	cout << medians[ceil((N - 1) / 2.0)] << "\n";
}