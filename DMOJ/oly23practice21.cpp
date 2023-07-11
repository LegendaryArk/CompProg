#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> medians;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> row;
		for (int j = 0; j < N; j++) {
			int a; cin >> a;
			row.push_back(a);
		}
		sort(row.begin(), row.end());
		medians.push_back(row[N / 2]);
	}
	sort(medians.begin(), medians.end());
	cout << medians[N / 2] << "\n";

	return 0;
}